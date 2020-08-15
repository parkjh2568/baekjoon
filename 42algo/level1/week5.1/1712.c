#include <stdio.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld %lld %lld",&a,&b,&c);
	d = c - b;
	if (d <= 0)
		printf("-1");
	else
	{
		printf("%d",(int)((a/d)+1));
	}
}
