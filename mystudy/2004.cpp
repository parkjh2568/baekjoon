#include<iostream>
#include <algorithm>
using namespace std;
//(n!)
//---------
//(n-m!)(m!)

long long two_num(long long n)
{
    long long temp = 0;
    long long temp2 = 2;
    while(n >= temp2)
    {
        temp += n/temp2;
        temp2 *= 2;
    }
    return temp;
}

long long five_num(long long n)
{
    long long temp = 0;
    long long temp2 = 5;
    while(n >= temp2)
    {
        temp += n/temp2;
        temp2 *= 5;
    }
    return temp;
}

int main()
{
    long long a, b;
    cin >> a >>b;

    long long temp2;
    long long temp5;
    long long ans;

    temp2 = two_num(a) - (two_num(b) + two_num(a-b));
    temp5 = five_num(a) - (five_num(b) + five_num(a-b));
    ans = min(temp2, temp5);
    if (ans <= 0)
        cout<<0;
    else
        cout<<ans;

}