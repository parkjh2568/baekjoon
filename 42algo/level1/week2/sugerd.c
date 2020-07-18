#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d",&a);
	for(int i = 0;;i++)
	{
		if (i * 5 > a)
		{
			b = i - 1;
			break;
		}
	}
	d = 0;
	for (int i = 0;b - i >=0;i++)
	{
		if ((a - ((b-i)*5))%3 == 0)
		{
			d = 22;
			c = (a-((b-i)*5))/3;
			printf("%d",(b-i+c));
			break;
		}
	}
	if (d == 0)
		printf("-1");
}
