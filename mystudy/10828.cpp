#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    stack<int> a;
    string b;
    int c,d,e,f;
    scanf("%d",&c);
    for(;c;c--)
    {
        cin >>b;
        if (b == "pop")
        {
            if (a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n",a.top());
            a.pop();
        }
        else if (b=="size")
        {
            printf("%ld\n", a.size());
        }
        else if (b=="empty")
        {
            if (a.empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if (b=="top")
        {
            if (a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n",a.top());
        }
        else
        {
            scanf("%d", &d);
            a.push(d);
        }
    }
}