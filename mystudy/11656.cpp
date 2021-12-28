#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    set<string> a;
    string b;
    string c;
    cin >> b;
    c = b;
    for(int i = 0;i < b.length()-1; i++)
    {
        a.insert(c);
        c = c.substr(1);
    }
    a.insert(c);
    for (auto& d:a)
    {
        cout << d<<"\n";
    }
}