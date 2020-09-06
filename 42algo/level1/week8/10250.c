#include <stdio.h>
int main()
{
	long a,h,w,n;
	long ct, out;
	scanf("%ld",&a);
	for(long i = 0; i < a; i++)
	{
		scanf("%ld %ld %ld",&h,&w,&n);
		out = n % h;
		if (!out)
		{
			out = h;
			ct = n / h;
		}
		else
			ct = n / h + 1;
		printf("%ld%02ld",out,ct);
		printf("\n");
	}
}
