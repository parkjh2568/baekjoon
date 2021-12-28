#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[200002];
    int leng = 0;
    int mid = 10000;
    int f = 1, b = 1;
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
                if (leng == 0)
                {
                    cin >> a[mid];
                }
                else if (aa[5] == 'f')//front
                {
                    cin >> a[mid - f];
                    f++;
                }
                else//back
                {
                    cin >> a[mid + b];
                    b++;
                }
                leng++;
            }
            else//pop
            {
                if (leng == 0)
                {
                    cout<<-1<<"\n";
                    leng++;
                }
                else if (aa[4] == 'f')//front
                {
                    f--;
                    cout<<a[mid-f]<<"\n";
                    a[mid-f] = 0;
                }
                else//back
                {
                    b--;
                    cout<<a[mid+b]<<"\n";
                    a[mid+b] = 0;
                }
                leng--;
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
                    cout << a[mid + b - 1]<<'\n';
        }
        else //front
        {
                if (leng == 0)
                    cout << -1<<'\n';
                else
                    cout << a[mid - f + 1]<<'\n';
        }
        if (leng == 0)
        {
            mid = 10000;
            f = 1;
            b = 1;
        }
    }
    return 0;
}