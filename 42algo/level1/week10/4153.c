#include <stdio.h>
int main()
{
	long a, b, c;
	long s1, s2, l;
	while(1)
	{
		scanf("%ld %ld %ld",&a, &b, &c);
		if (a == 0 && b == 0 && c ==0)
			break;
		if (a >=b && a >= c)
		{
			l = a;
			s1 = b;
			s2 = c;
		}
		else if (b >=a && b >=c)
		{
			l = b;
			s1 = a;
			s2 = c;
		}
		else
		{
			l = c;
			s1 = a;
			s2 = b;
		}
		if (s1*s1 + s2*s2 == l*l)
			printf("right\n");
		else
			printf("wrong\n");
	}
}
