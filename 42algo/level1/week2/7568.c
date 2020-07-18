#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int x[a],y[a],z[a];
	for(int i = 0;i < a;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		z[i] = 1;
	}
	for(int i = 0;i < a;i++)
	{
		for(int j = 0;j < a;j++)
		{
			if(x[i] < x[j] && y[i] < y[j])
				z[i] = z[i] + 1;
		}
	}
	int kk = 0;
	while (kk < a)
	{
		printf("%d",z[kk]);
		if (kk != a - 1)
			printf(" ");
		kk++;
	}
}
