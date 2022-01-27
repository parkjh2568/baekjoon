#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <map>
using namespace std;

map<int, pair<int, char>> level;
bool f[20000+1] = {0};

void f_clear(int a)
{
    for(int i = 0; i <= a; i++)
        f[i] = 0;
}

void dfs(set<int> a[], int b, bool f[], int lv, char color)
{
    f[b] = true;
    level.insert({b, {lv, color}});
    for (auto &g : a[b])
    {
        if (f[g])
            continue;
        if (color == 'b')
            dfs(a, g, f, lv + 1, 'r');
        else
            dfs(a, g, f, lv + 1, 'b');
    }
}

void bfs(set<int> a[], int b, bool f[])
{
    f[b] = true;
    vector<int> fk;
    fk.push_back(b);
    int lv = 0;
    char color;
    int flag;
    for (int i = 0; i < fk.size(); i++)
    {
        flag = 0;
        for (auto &tt : a[fk[i]])
        {
            if (f[tt])
                continue;
            if (flag == 0){
                color = level[tt].second;
                flag = 1;
            }
            else
            {
                if (color != level[tt].second)
                {
                    cout<<"NO\n";
                    return;
                }
            }
            f[tt] = true;
            fk.push_back(tt);
        }
    }
    cout<<"YES\n";
}

int main()
{
    int a, b, g;
    set<int> e[20000 + 1];
    cin >> g;
    while (g--)
    {
        cin >> a >> b;
        int c, d;
        for (int i = 0; i < b; i++)
        {
            cin >> c >> d;
            e[c].insert(d);
            e[d].insert(c);
        }
        f_clear(a);
        for(int i = 0;i < a; i++)
        {
            if (!f[i])
                dfs(e, i, f, 0, 'r');
        }
        f_clear(a);
        bfs(e, 1, f);
        for (int i = 0;i <= a; i++)
            e[i].clear();
        level.clear();
    }
}

/* 반례모음
1
6 6
1 3
3 4
4 2
2 5
5 6
6 1
YES


2
3 3
1 2
2 3
1 3
2 1
1 2
NO YES

1
5 4
1 2
2 3
3 1
4 5
NO

1
4 2
1 2
3 4
YES

1
5 4
1 2
3 4
4 5
3 5
NO  //실패

1
4 3
1 4
4 3
3 2
YES

1
5 4
1 2
1 3
2 4
3 5
YES

1
4 3
1 2
4 3
2 3
YES
*/