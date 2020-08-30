#include <stdio.h>
int main()
{
	int a[10] = {0};
	long b,c,d, out,e;
	scanf("%ld %ld %ld",&b,&c,&d);
	out = b * c * d;
	while (out > 0)
	{
		e = out % 10;
		a[(int)e]++;
		out /=10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}
}
