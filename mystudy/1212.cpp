#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main()
{
	string a;
	cin >>a;
	int cnt;
	int b,b2,b3,b4;
	cnt = 0;
	stack<int> c;
	for(int i = a.length() - 1;i > 0; i--)
	{
		b = 0;
		b = int(a[i] - '0');
		b4 = b%2;
		b /= 2;
		b3 = b%2;
		b /= 2;
		b2 = b;
		c.push(b4);
		c.push(b3);
		c.push(b2);
	}
			b = 0;
		b = int(a[0] - '0');
	if (b <= 1)
	{

		c.push(b);
	}
	else if (b <= 3)
	{


		b4 = b%2;
		b /= 2;
		c.push(b4);
		c.push(b);
	}
	else
	{

		b4 = b%2;
		b /= 2;
		b3 = b%2;
		b /= 2;
		b2 = b;
		c.push(b4);
		c.push(b3);
		c.push(b2);
	}
	while(!c.empty())
	{
		cout<<c.top();
		c.pop();
	}
}
