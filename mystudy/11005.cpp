#include <iostream>
#include <vector>
using namespace std;

char a[60];

void initalize()
{
	for(int i = 0;i < 10; i++)
		a[i] = '0'+i;
	for(int i = 10;i < 36; i++)
		a[i] = 'A'+i-10;
}

int main()
{
	vector<char> c;
	initalize();
	long long d,b;
	cin >>d>>b;
	while(d)
	{
		c.push_back(a[d%b]);
		d /= b;
	}
	vector<char>::iterator kk;
	kk = c.end();
	kk--;
	while(kk != c.begin())
	{
		cout<<*kk;
		kk--;
	}
			cout<<*kk;

}
