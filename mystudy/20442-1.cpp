#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string a;
    long long b, f, r, l, r_cnt, r_all, r_f, l_f, e_f, r_c, l_c;
    cin >> a;
    b = a.length();
    if (b == 0)
    {
        cout<< "0\n";
        return 0;
    }
    f = 0;
    r = b - 1;
    l = 0;
    r_f = 0;
    l_f = 0;
    r_c = 0;
    l_c = 0;
    r_cnt = 0;
    r_all = 0;
    e_f = 0;
    vector<int> muyaho; // r_cnt/ k순
    while (r_f == 0 || l_f == 0)
    {
        if (l >= r)
        {
            e_f = 1;
            break;
        }
        if (a[l] == 'R')
        {
            r_cnt++;
            r_all++;
            l++;
        }
        else
            l_f = 1;
        if (a[r] == 'R')
        {
            r_cnt++;
            r_all++;
            r--;
        }
        else
            r_f = 1;
    }
    l_f = 0;
    r_f = 0;
    while (e_f == 0)
    {
        if (l > r)
        {
            e_f = 1;
            break;
        }
        if (a[l] == 'K' && l_c <= r_c)
        {
            l_c++;
            l++;
        }
        else if(a[l] == 'K'){

        }
        else
        {
            l_f = 1;
        }

        if (a[r] == 'K' && l_c <= r_c+1)
        {
            r_c++;
            r--;
        }
        else if(a[r] == 'K'){

        }
        else
        {
            r_f = 1;
        }

        if (r_f == 1 && l_f == 1)
        {
            muyaho.push_back(r_cnt);
            muyaho.push_back(l_c);
            if (l != r)
            {
                while (a[l] == 'R')
                {
                    r_cnt++;
                    r_all++;
                    l++;
                }
                if (l < r)
                {
                    while (a[r] == 'R')
                    {
                        r_cnt++;
                        r_all++;
                        r--;
                    }
                }
            }
            else
            {
                r_all++;
                e_f = 1;
            }
        }
        else if (l_f == 1)
        {
            muyaho.push_back(r_cnt);
            muyaho.push_back(l_c);
            while (a[l] == 'R')
            {
                r_cnt++;
                r_all++;
                l++;
            }
        }
        else if (r_f == 1)
        {
            muyaho.push_back(r_cnt);
            muyaho.push_back(r_c);
            while (a[r] == 'R')
            {
                r_cnt++;
                r_all++;
                r--;
            }
        }
        l_f = 0;
        r_f = 0;
    }
    int bigbig = 0;
    int temptemp = 0;
    vector<int>::iterator hello;
    hello = muyaho.begin();
    while (hello != muyaho.end())
    {
        bigbig = (r_all - *hello) + (*(hello + 1) * 2);
        if (temptemp < bigbig)
            temptemp = bigbig;
        hello++;
        hello++;
    }
    if (r_all > temptemp)
        temptemp = r_all;
    cout << temptemp<<"\n";
}