#include <stdio.h>
int main()
{
	int a[43] = {0};
	int b;
	for (int i = 0;i < 10; i++)
	{
		scanf("%d",&b);
		a[b%42]++;
	}
	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (a[i] != 0)
			count++;
	}
	printf("%d",count);
}
