#include <iostream>

int a[51][51];

int main()
{
	int b,c, d;
	scanf("%d %d",&b, &c);
	for(int i = 0; i < b; i++)
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(int i = 0; i < b; i++)
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%1d", &d);
			a[i][j] = a[i][j] ^ d;
		}
	}
	int cnt = 0;
	for(int i = 0; i < b-2; i++)
	{
		for(int j = 0; j < c-2; j++)
		{
			if (a[i][j] == 1)
			{
				cnt++;
				for(int ii = i; ii <= i+2; ii++)
				{
					for(int jj = j; jj <= j+2; jj++)
					{
						a[ii][jj] ^= 1;
					}
				}
			}
		}
	}
	for(int i = 0; i < b; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if (a[i][j] == 1)
			{
				printf("-1");
				return 0;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
