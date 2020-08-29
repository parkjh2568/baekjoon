#include <stdio.h>
int bing(int a[5][5])
{
	int q,w,e1,e2,result,ii,jj;
	result = 0;
	e1 = 0;
	e2 = 0;
	for (ii = 0; ii < 5; ii++)
	{
		q = 0;
		w = 0;
		for (jj = 0; jj < 5; jj++)
		{
			if (a[ii][jj] < 0)
				q++;
			if (a[jj][ii] < 0)
				w++;
		}
		if (a[ii][ii] < 0)
			e1++;
		if (a[ii][5-ii-1] <0)
			e2++;
		if (q == 5)
			result++;
		if (w == 5)
			result++;
	}
	if (e1 == 5)
		result++;
	if (e2 == 5)
		result++;
	return (result);
}

void ft_printf(int a[5][5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[5][5];
	int k, num, i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k = 0;k<25;k++)
	{
		scanf("%d",&num);
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (num == a[i][j])
				{
					a[i][j] = -10;
					break;
				}
			}
		}
		if (bing(a) >= 3)
		{
			printf("%d",k+1);
				break;
		}
	}
}
