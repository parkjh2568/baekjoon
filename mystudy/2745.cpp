#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

map<char, int> a;

void initalize()
{
	for(int i = 0;i < 10; i++)
		a.insert(pair<char, int>('0'+i,i));
	for(int i = 10;i < 36; i++)
		a.insert(pair<char, int>('A'+i-10,i));
}

int main()
{
	initalize();
	string c;
	int b;
	long long sum = 0;
	cin>>c>>b;
	for(int i = 0;i < c.length(); i++)
	{
		sum *= b;
		sum += a[c[i]];
	}
	cout<<sum;
}
