#include <stdio.h>

int ft_mknum(int a)
{
	int c;
	c = a;
	while (a)
	{
		c = c + (a%10);
		a = a/10;
	}
	return (c);
}
int ft_count(int a)
{
	int b;
	b = 0;
	while(a)
	{
		b++;
		a = a/10;
	}
	return (b);
}
int main()
{
	int a, b;
	for(a = 1;a <= 10000;a++)
	{
		for(b = 1; b <= ((ft_count(a) * 9)); b++)
		{
			if (a == (ft_mknum(a - b)))
				break;
			else if (a - b == 0)
			{
				b = ((ft_count(a) *9)+1);
				break;
			}
		}
		if (b == ((ft_count(a) * 9)+1))
			printf("%d\n",a);
	}
}
