#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int i = 1;i <=a;i++)
	{
		for(int j = 1; j<=i;j++)
			printf("*");
		printf("\n");
	}
	for (int i = a - 1; i > 0; i--)
	{
		for(int j = i; j >0;j--)
			printf("*");
		printf("\n");
	}
}
