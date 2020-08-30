#include <stdio.h>
int main()
{
	int a;
	int b;
	a = 0;
	for (int i = 0; i<5;i++)
	{
		scanf("%d",&b);
		if (b < 40)
			a += 40;
		else
			a += b;
	}
	printf("%d",a/5);
}
