#include <stdio.h>
int main()
{
	int a, c, d;
	char b;
	scanf("%d",&a);
	scanf("%c",&b);
	while(a--)
	{
		c = 0;
		d = 0;
		while(scanf("%c",&b) != EOF)
		{
			if (b != 'O' && b != 'X')
				break;
			if (b == 'O')
				c = c + 1;
			else
				c = 0;
			d = d + c;
		}
		printf("%d\n",d);
	}
}
