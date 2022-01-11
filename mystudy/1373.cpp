#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string a;
	cin >>a;
	int cnt;
	int sum;
	vector<int> b;
	cnt = 0;
	sum = 0;
	for(int i = a.length()-1;i >=0; i--)
	{
		cnt++;
		if (cnt == 1)
		{
			sum += (int(a[i] - '0')*1);
		}
		else if (cnt == 2)
		{
			sum += (int(a[i] - '0')*2);
		}
		else
		{
			sum += (int(a[i] - '0')*4);
			b.push_back(sum);
			sum = 0;
			cnt = 0;
		}
	}
	if (cnt != 0)
	{
		b.push_back(sum);
	}
	vector<int>::iterator bb;
	bb = b.end();
	for(bb--;bb!=b.begin();bb--)
	{
		cout<<*bb;
	}
	cout<<*bb;
}
