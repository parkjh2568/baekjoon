#include <iostream>
#include <vector>
using namespace std;


int f[1001];
vector<int> c[1001];

void dfs(int i, int j)
{
    f[i] = j;
    for(auto &a:c[i])
    {
        if (f[a] != -1)continue;
        dfs(a,j);
    }
}

int main()
{
    int a, b;
    cin >> a >>b ;
    int d,e;
    int cnt = 0;
    while(b--)
    {
        cin >> d>>e;
        c[d].push_back(e);
        c[e].push_back(d);
    }
    for(int i = 0; i < 1001; i++)
        f[i] = -1;
    for(int i = 1; i <= a; i++)
    {
        if (f[i] == -1)
        {
            dfs(i,i);
            cnt++;
        }
    }
    cout<<cnt;
}