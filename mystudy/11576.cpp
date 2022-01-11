#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >>a>>b;
    int c;
    cin >>c;
    long long temp = 0;
    int d;
    for(int i = 0; i < c; i++)
    {
        temp *= a;
        cin >> d;
        temp += d;
    }
    stack<int> e;
    while(temp)
    {
        e.push(temp%b);
        temp /= b;
    }
    while(!e.empty())
    {
        cout<<e.top()<<" ";
        e.pop();
    }
    return 0;
}