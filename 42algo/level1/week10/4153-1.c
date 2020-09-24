#include <stdio.h>
int main()
{
	long a, b, c;
	while(scanf("%ld %ld %ld",&a,&b,&c),a)
	{
		puts((a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b?"right":"wrong"));
	}
}
