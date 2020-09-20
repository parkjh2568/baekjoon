#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a, &c);
	int ct = -1;
	int d = 0;
	int sum = 0;
	for(b = a; b >= a && b <= c; b++)
	{
		if (b == 1)
			continue;
		if (b == 2)
		{
			ct = 2;
			sum += 2;
		}
		else if(b%2 == 1)
		{
			d = 0;
			for(int j = 3; j <= sqrt(b); j = j+2)
			{
				if (b % j == 0)
				{
					d = 1;
					break;
				}
			}
			if (d == 0)
			{
				sum += b;
				if (ct == -1 || ct > b)
					ct = b;
			}
		}
	}
	if (ct == -1)
		printf("-1");
	else
		printf("%d\n%d",sum,ct);
}
