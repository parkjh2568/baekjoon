#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string a;
	cin >> n;
	if (n == 0)
	{
		cout << "0";
	}
	else
	{
		while (n != 0)
		{
			if (n % -2 == 0)
			{
				a += "0";
				n /= -2;
			}
			else
			{
				a += "1";
				n = (n - 1) / -2;
			}
		}
		reverse(begin(a), end(a));
	}
	cout<<a<<"\n";
	return 0;
}