#include <iostream>
using namespace std;

long long gcd(long long a, long long b) { return a % b ? gcd(b, a%b) : b; }
 
int main()
{
    long long a,b,c;
    cin>>a>>b;
	c = gcd(a,b);
	while (c--)
		cout<<"1";
}
