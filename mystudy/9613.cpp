#include <iostream>
using namespace std;

long long gcd(long long a, long long b) { return a % b ? gcd(b, a%b) : b; }
 
int main()
{
    long long a,b;
	int c,d;
	int e[101];
	long long sum;
	cin>>c;
	while(c--)
	{
		sum = 0;
		cin>>d;
		for(int i = 0;i < d;i++)
			cin>>e[i];
		for(int i = 0;i < d;i++)
		{
			for(int j = i+1; j < d;j++)
			{
				sum += gcd(e[i],e[j]);
			}
		}
		cout<<sum<<"\n";
	}
}
