#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> a;
    stack<char> b;
    string c;
    char e;
    int d;
    cin >>c>>d;
    for(int i = 0; i < c.length(); i++)
        a.push(c[i]);
    for(;d--;)
    {
        c.clear();
        cin>>e;
        if (e=='P')
        {
            cin>>e;
            a.push(e);
        }
        else if (e=='B')
        {
            if(!a.empty())
                a.pop();
        }
        else if (e=='D')
        {
            if (!b.empty())
            {
                a.push(b.top());
                b.pop();
            }
        }
        else if (e=='L')
        {
            if (!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
    }
    while(!a.empty())
    {
        b.push(a.top());
        a.pop();
    }
    while(!b.empty())
    {
        cout<<b.top();
        b.pop();
    }
}