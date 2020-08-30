#include <stdio.h>
int config(int a)
{
	int c, d,e;
	c = a % 10;
	d = (a/10)%10;
	e = d - c;
	a = a / 10;
	while (a> 9)
	{
		c = a % 10;
		d = (a/10)%10;
		if ( e != (d - c))
			return (0);
		a = a/10;
	}
	return (1);
	
}
int main()
{
	int a, ct;
	scanf("%d",&a);
	if (a >0 && a < 100)
		printf("%d",a);
	else
	{
		ct = 99;
		for(int i = 100; i <= a; i++)
		{
			if (config(i))
				ct++;
		}
		printf("%d",ct);
	}
}
