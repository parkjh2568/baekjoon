#include <stdio.h>
int main()
{
	int a;
	double max, ct, sum;
	scanf("%d",&a);
	max = 0;
	sum = 0;
	double b[a+1];
	for (int i = 0; i < a; i++)
	{
		scanf("%lf",&b[i]);
		if (max < b[i])
			max = b[i];
	}
	for (int i = 0; i < a; i++)
	{
		b[i] = (b[i]/max) * 100;
		sum += b[i];
	}
	printf("%.5lf",sum/a);
}
