#include <stdio.h>
int main()
{
	int a,b,sum;
	a = 0;
	b = 0;
	for (int i = 0; i< 3; i++)
	{
		if (b == 0)
			scanf("%d",&b);
		else 
		{
			scanf("%d", &a);
			if (b > a)
				b = a;
		}
	}
	sum = b;
	scanf("%d",&b);
	scanf("%d",&a);
	if (b > a)
		sum += a;
	else
		sum += b;
	printf("%d",sum-50);
}
