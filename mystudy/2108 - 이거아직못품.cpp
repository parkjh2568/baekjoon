#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int a, b, c;
    cin >> a;
    if (a == 1)
    {
        cin >> b;
        cout << b << "\n"
             << b << "\n"
             << b << "\n"
             << 0 << "\n";
    }
    else
    {
        vector<int> d;
        map<int, int> e;
        int sum = 0;
        c = a;
        while (c--)
        {
            cin >> b;
            sum += b;
            d.push_back(b);
            if (!e.count(b))
                e.insert(pair<int, int>(b, 1));
            else
                e[b]++;
        }

        vector<pair<int, int>> v(e.begin(), e.end());
        sort(v.begin(), v.end(), cmp);
        sort(d.begin(), d.end());
        float kjk;
        if (sum < 0)
            kjk = -0.5;
        else
            kjk = 0.5;
        int fff = floor((float)((float)sum / (float)a) + kjk);
        int kkk = (v.size() == 1) ? v[0].first : v[1].first;
        cout << (int)fff << "\n";
        cout << d[int(a / 2)] << "\n";
        cout << kkk << "\n";
        cout << d[a - 1] - d[0] << "\n";
    }
}