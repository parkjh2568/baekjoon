#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d",&a);
	for(int i = 1;i <= a;i++)
	{
		b = i;
		for(;b>0;b--)
			printf("*");
		printf("\n");
	}
}
