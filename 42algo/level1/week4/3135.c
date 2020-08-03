#include <stdio.h>
int main()
{
	int a,b,n;
	int c[5];
	for (int i = 0; i <5;i++)
		c[i] = 0;
	scanf("%d %d %d",&a,&b,&n);
	for (int i = 0; i < n;i++)
		scanf("%d",&c[i]);
	int calcul;
	calcul = a - b;
	if (calcul < 0)
		calcul *= -1;
	int j,k,click;
	k = 9999;
	click = 0;
	for (int i = 0; i <n; i++)
	{
		j = c[i] - b;
		if (j < 0)
			j *= -1;
		if (j < k)
			k = j;
	}
	if (calcul > k)
	{
		click = k + 1;
	}
	else
		click = calcul;
	printf("%d",click);
}
