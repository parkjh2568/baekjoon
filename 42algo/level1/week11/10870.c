#include <stdio.h>

int pivo(int a)
{
	if (a == 0)
		return (0);
	else if (a == 1)
		return (1);
	else
		return pivo(a-1) + pivo(a-2);
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",pivo(a));
}
