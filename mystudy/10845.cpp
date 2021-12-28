#include <iostream>
#include <string>

using namespace std;
int loc(int a)
{
   if (a >= 10000)
       return (a - 10000);
    else
        return a;
}

int main()
{
    int a[100001];
    int leng = 0;
    int slocate = 0;
    int max = 10000;
    int cnt;
    string aa;
    cin >> cnt;
    while(cnt--)
    {
        aa.clear();
        cin >> aa;
        if (aa[0] == 'p')
        {
            if (aa[1] == 'u')//push
            {
                cin >> a[slocate + leng];
                leng++;
            }
            else//pop
            {
                if (leng == 0)
                    cout << -1<<'\n';
                else
                {
                    leng--;
                    cout << a[slocate]<<'\n';
                    a[slocate] = 0;
                    if (slocate == 10000)
                        slocate = 0;
                    else
                        slocate++;
                }
            }
        }
        else if (aa[0] == 's')
        {
            cout <<leng<<'\n';
        }
        else if (aa[0] == 'e')
        {
                if (leng == 0)
                    cout << 1<<'\n';
                else
                    cout << 0<<'\n';
        }
        else if (aa[0] == 'b')
        {
                if (leng == 0)
                    cout << -1<<'\n';
                else
                    cout << a[loc(slocate + leng - 1)]<<'\n';
        }
        else //front
        {
                if (leng == 0)
                    cout << -1<<'\n';
                else
                    cout << a[slocate]<<'\n';
        }
    }
    return 0;
}