#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b,c;
	b = 2*a-1;
	c = 0;
	for(int i = 0;i < a; i++)
	{
		for(int j = 0;j<b;j++)
		{
			if (j >= b-c)
				break;
			if (j < c)
				printf(" ");
			else
				printf("*");
		}
		c++;
		printf("\n");
	}
	c--;
	for(int i = 1;i < a; i++)
	{
		c--;
		for(int j = 0;j<b;j++)
		{
			if (j >= b-c)
				break;
			if (j < c)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}
