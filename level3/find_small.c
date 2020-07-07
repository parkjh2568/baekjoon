#include <stdio.h>
int main()
{
	int a, b, c, d;
	c = 0;
	scanf("%d %d",&a,&b);
	for(;a>0;a--)
	{
		scanf("%d",&d);
		if (d < b)
		{
			if (c == 0)
				c++;
			else
				printf(" ");
			printf("%d",d);
		}
	}
}
