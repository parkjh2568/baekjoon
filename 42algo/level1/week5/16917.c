#include <stdio.h>
int main()
{
	int a,b,c,x,y;
	scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
	int sum;
	if ((a + b)/2 > c)
	{
		if (x > y)
		{
			sum = c * y * 2;
			x = x - y;
			if ( a > c * 2)
				sum += x * c * 2;
			else
				sum += x * a;
		}
		else
		{
			sum = c * x * 2;
			y = y - x;
			if (b > 2 * c)
				sum += y * c * 2;
			else
				sum += y * b;
		}
	}
	else
	{
		sum = a * x;
		sum += b * y;
	}
	printf("%d",sum);
}
