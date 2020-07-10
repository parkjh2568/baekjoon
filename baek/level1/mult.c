#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d",&a, &b);
	c = 0;
	d = 0;
	e = 1;
	f = 0;
	while (b > 0)
	{
		c = b % 10;
		d = a * c;
		printf("%d\n",d);
		f = f + (d * e);
		e = e * 10;
		d = 0;
		c = 0;
		b = b / 10;
	}
	printf("%d\n",f);
}
