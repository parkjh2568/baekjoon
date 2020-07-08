#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	b = -1;
	e = 0;
	while (a != b)
	{
		if (e == 0)
		{
			c = a / 10;
			d = a % 10;
			b = (d * 10) + (c + d)%10;
		}
		else
		{
			c = b / 10;
			d = b % 10;
			b = (d * 10) + (c + d)%10;

		}
		e++;
	}
	printf("%d",e);
}
