
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int c;
    cin>>c;
    if (c<2)
        return 0;
    int n = 10000000;
    int cnt = 0;
	bool* PrimeArray = new bool[n + 1];
	for (int i = 2; i <= n; i++)
	    PrimeArray[i] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= n; j += i)
			    PrimeArray[j] = false;
	}
    multiset<int> a;
    cnt = 2;
    while (!PrimeArray[c] &&c > 2)
    {
        while (c % cnt == 0 && c >=2 && PrimeArray[cnt])
        {
            a.insert(cnt);
            c /= cnt;
        }
        cnt++;
    }
    if (c >= 2)
        a.insert(c);
    for (auto &e : a)
    {
        cout << e << "\n";
    }
    return 0;
}
