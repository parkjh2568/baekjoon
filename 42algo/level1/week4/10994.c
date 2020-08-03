#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n, d;
	d = 0;
	n = 1 + ((a - 1) * 4);
	for (int i =1;i <= n;i++)
	{
		if (i % 2 == 0 && i / 2 < a)
			d++;
		else if (i % 2 == 1 && i / 2 >= a)
			d--;
		for(int j = 1;j<=n;j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 1)
					printf("*");
				else
				{
					if (j / 2 <= d || n - (2 * d - 1) <= j)
						printf(" ");
					else
						printf("*");
				}
			}
			else
			{
				if (j == 1 || j == n)
					printf("*");
				else if (j % 2 == 1 && j / 2 < d)
					printf("*");
				else if (j % 2 == 1 && (n - (2 * d - 1)) <= j)
					printf("*");
				else
					printf(" ");
			}
		}

		printf("d = %d\n",d);

	}
}
