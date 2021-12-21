#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int b,c,d,e,f;
    cin >> a;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    for(auto g:a)
    {
        if (g =='(')
        {
            b++;
            if (c==2)
            {
                d += f;
                f = 0;
            }
            c = 1;
        }
        if (g == ')')
        {
            b--;
            if (c == 1)
            {
                d += b;
                e = b;
                c = 0;
            }
            else
            {
                c = 2;
                f++;
            }

        }
        if (b == 0)
        {
            d += e;
            e = 0;
            f = 0;
        }
    }
    printf("%d\n",d);
}