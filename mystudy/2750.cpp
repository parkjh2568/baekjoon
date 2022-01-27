#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a,b;
    vector<int> c;
    cin >> a;
    while(a--)
    {
        cin >>b;
        c.push_back(b);
    }
    sort(c.begin(),c.end());
    for(auto &kk:c)
    {
        cout<<kk<<"\n";
    }
}