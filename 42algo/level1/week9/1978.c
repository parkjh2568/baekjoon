#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	int ct = 0;
	int d = 0;
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&b);
		if (b == 1)
			continue;
		if (b == 2)
			ct++;
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
				ct++;
		}
	}
	printf("%d",ct);
}
