#include <iostream>
using namespace std;

int main()
{
    int n = 1000000;
    int b[78500];
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
    for (int i = 2; i <= n; i++)
    {
	    if (PrimeArray[i] == true)
        {
            b[cnt] = i;
            cnt++;
        }
    }
    int a;
    int flag;
    scanf("%d",&a);
    while(a != 0)
    {
        flag = 0;
        for(int i = 0; b[i] < a; i++)
        {
            if (PrimeArray[a - b[i]])
            {
                printf("%d = %d + %d\n",a,b[i],a-b[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("Goldbach's conjecture is wrong.\n");
        scanf("%d",&a);
    }
}