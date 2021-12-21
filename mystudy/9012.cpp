#include <iostream>
// #include <stdio.h>
using namespace std;
#include <string>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    string f;
    while(a--)
    {
        c = 0;
        d = -1;
        cin >> f;
        for(auto g:f)
        {
            if (g == '(')
                c++;
            else
                c--;
            if (c < 0)
            {
                printf("%s\n", "NO");
                d = 0;
                break;
            }
        }
        if (d == 0)
            continue;
        if (c!=0)
            printf("%s\n","NO");
        else
            printf("%s\n","YES");
    }
}