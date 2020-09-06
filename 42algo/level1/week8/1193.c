#include <stdio.h>
int main()
{
	long a;
		long b, c,d,e,f;
	scanf("%ld",&a);
	c = 0;
	b = 1;
	while(1)
	{
		if ( a <= (c + b))
			break;
		c += b;
		b++;
	}
	d = b - (a - c) + 1;
	e = b + 1 - d;
	f = b + 1 - e;
	if (b%2 == 0)
	{
		printf("%ld",e);
		printf("/");
		printf("%ld",f);
	}
	else
	{
		printf("%ld",f);
		printf("/");
		printf("%ld",e);

	}
}
