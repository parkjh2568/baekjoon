#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int b, c,d,f,g,h;
    cin >> b >> c;

    while(b--)
    {
        cin>>d;
        a.push_back(d);
    }
    d = a.size();
    f = 2147483640;
    for(int i = 0;i < d; i++)
    {
        for(int j = i+1;j < d; j++)
        {
            for(int k = j+1;k < d; k++)
            {
                g = a[i]+a[j]+a[k];

                if (g > c) continue;
                if (g == c)
                {
                    cout<<c;
                    return 0;
                }
                if (f > c-g)
                    f = c-g;
            }
        }
    }
    cout<<c-f;
}

/**
 * 5 21
 * 5 6 7 8 9
 * 
 * 21
 * 
 * 10 500
 * 93 181 245 214 315 36 185 138 216 295
 * 
 * 497
 * 
 * 
 * 
 * N >=3 <=100
 * M >=3 <= 30000
 * 
 */