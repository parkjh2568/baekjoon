#include <stdio.h>
int main()
{
	int a, b;
	int max, min;
	scanf("%d",&a);
	scanf("%d",&max);
	min = max;
	for (int i = 1; i < a; i ++)
	{
		scanf("%d",&b);
		if (min > b)
			min = b;
		if (max < b)
			max = b;
	}
	printf("%d %d", min, max);
}
