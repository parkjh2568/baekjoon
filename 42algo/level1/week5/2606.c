#include <stdio.h>

int main()
{
	int a;
	int b;

	scanf("%d",&a);
	int com[a + 2];
	for (int i = 0; i < a + 2; i++)
	{
		com[i] = 0;
	}
	scanf("%d",&b);
	int d[b+1];
	int f[b+1];

	com[1] = 1;
	for(int i = 0;i < b;i++)
	{
		scanf("%d %d",&d[i],&f[i]);
		if (com[d[i]] == 1)
			com[f[i]] = 1;
		else if (com[f[i]] == 1)
			com[d[i]] = 1;
	}
	for(int j = 0;j < a+1; j++)
	{
		for(int i = 0;i < b; i++)
		{
			if (com[d[i]] == 1)
				com[f[i]] = 1;
			else if (com[f[i]] == 1)
				com[d[i]] = 1;
		}
	}
	int sum;
	sum = 0;
	for(int i = 1; i<a+1;i++)
	{
		sum += com[i];
	}
	printf("%d",sum - 1);
}
