#include <stdio.h>

void ft_even (int a)
{
	for (int j = 1; j<=a;j++)
	{
		if (j % 2 == 0)
			printf("*");
		else
		{
			if (j == a)
				break;
			else
				printf(" ");
		}
	}
}

void ft_odd (int a)
{
	for (int j = 1; j<=a;j++)
	{
		if (j % 2 == 0)
		{
			if (j == a)
				break;
			else
				printf(" ");
		}
		else
			printf("*");
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	int b;
	b = 2*a;
	for (int i = 1; i <= b; i++)
	{
		if (i % 2 == 0)
			ft_even(a);
		else
			ft_odd(a);
		printf("\n");
	}
}
