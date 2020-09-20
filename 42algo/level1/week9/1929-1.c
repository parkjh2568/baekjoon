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
			printf("2\n");
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
				printf("%d\n", b);
		}
	}
}
