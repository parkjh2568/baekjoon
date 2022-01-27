#include <iostream>
#include <string>
using namespace std;

int part(int a)
{
    int sum = 0;
    while(a)
    {
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main()
{
    string a;
    cin >> a;
    int b = a.length();
    int c = atoi(a.c_str());
    for(int i = c - (9 * b);i<c;i++)
    {
        if (i + part(i) == c)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<0;
}