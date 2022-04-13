#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char a[10] = {'1','2','3','4','5','6','7','8','9'};
char aa[11];
vector<string> v;
string s;

void imloop(int leng, int locate)
{
    if (leng-1 != locate)
    {
        aa[locate + 1] = '+';
        imloop(leng, locate + 1);
        aa[locate + 1] = '-';
        imloop(leng, locate + 1);
        aa[locate + 1] = ' ';
        imloop(leng, locate + 1);
    }
    else
    {
        s = "";
        int temp = 0;
        int ans = 0;
        int flag = 0;
        for(int i = 0; i < leng; i++)
        {
            for(;i<leng;i++)
            {
                temp *= 10;
                temp += a[i] - '0';
                if (aa[i+1] != ' ')
                    break;
                if (i == leng-1)
                    break;
                s = s + a[i] + aa[i+1];
            }
            if (flag == 0)
            {
                ans = temp;
                if (aa[i+1] == '+')
                    flag = 1;
                else
                    flag = -1;
                temp = 0;
            }
            else if (flag == 1)
            {
                ans += temp;
                if (aa[i+1] == '+')
                    flag = 1;
                else
                    flag = -1;
                temp = 0;
            }
            else if (flag == -1)
            {
                ans -= temp;
                if (aa[i+1] == '+')
                    flag = 1;
                else
                    flag = -1;
                temp = 0;
            }
            s = s + a[i] + aa[i+1];
        }
        if (ans == 0)
            v.push_back(s);
        s.clear();
    }
}

int main()
{
    int b;
    cin >> b;
    int c;
    while (b--)
    {
        v.clear();
        cin >> c;
        if (c >= 3 && c <= 9)
        {
            imloop(c, 0);
            sort(v.begin(), v.end());
            for (auto &a : v)
            {
                cout << a << "\n";
            }
        }
        cout << "\n";
    }
}