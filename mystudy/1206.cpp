#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;



void dfs(set<int> a[], int b, bool f[])
{
    f[b] = true;
    cout<<b<<" ";
    for (auto &g : a[b])
    {
        if (f[g]) continue;
        dfs(a, g, f);
    }
}

void bfs(set<int> a[], int b, bool f[])
{
    f[b] = true;
    cout<<b<<" ";
    vector<int> fk;
    fk.push_back(b);
    for(int i = 0; i < fk.size(); i++)
    {
        for(auto &tt: a[fk[i]]){
            if (f[tt])continue;
            f[tt] = true;
            fk.push_back(tt);
            cout<<tt<<" ";
        }
    }
}

int main()
{
    int a, b, g;
    cin >> a>>b>>g;
    set<int> e[a+1];
    bool f[1001] ={0};
    int c, d;
    for (int i = 0; i < b; i++)
    {
        cin>>c>>d;
        e[c].insert(d);
        e[d].insert(c);
    }

    dfs(e, g, f);
    cout<<"\n";
    bool h[1001] ={0};
    bfs(e, g, h);
}