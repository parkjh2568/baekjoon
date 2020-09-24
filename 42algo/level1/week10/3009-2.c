#include <stdio.h>
int main()
{
	int a,b,c,d;
	c = 0;
	d = 0;
	while(~scanf("%d %d", &a,&b))
	{
		c ^= a;
		d ^= b;
	}
	printf("%d %d",c,d);
}
