#include <stdio.h>
int main()
{
	int a,b,ct,out;
	scanf("%d",&out);
	ct = 1;
	b = 1;
	while (b < 9)
	{
		scanf("%d",&a);
		b++;
		if (out < a)
		{
			out = a;
			ct = b;
		}
	}
	printf("%d\n%d",out,ct);
}
