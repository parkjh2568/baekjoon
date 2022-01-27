#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    int b = 6659;
    string yaho;
    int tt;
    cin >> a;
    if (a == 1)
        cout<<666;
    else if (a > 1 && a <= 6)
        cout<<a-1<<666;
    else
    {
        int cnt = 6;
        while(b && cnt != a)
        {            
            b++;
            yaho = to_string(b);
            tt = yaho.find("666", 0, 3); 
            if (tt >= 0)
            {
                cnt++;
            }
        }
        cout<<b;
    }
}