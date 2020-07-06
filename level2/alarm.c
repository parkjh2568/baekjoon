#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	b = b - 45;
	c = 0;
	if (b < 0)
	{
		c = -1;
		b = 60 + b;
	}
	a = a + c;
	if (a < 0)
		a = 23;
	printf("%d %d",a,b);
}
