#include <stdio.h>
int main()
{
	int a, b, j;
	scanf("%d",&a);
	for(int i = 1;i <= a;i++)
	{
		b = i - 1;
		for(j = 1;j <= a;j++)
		{
			if(j>=a-b) 
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
