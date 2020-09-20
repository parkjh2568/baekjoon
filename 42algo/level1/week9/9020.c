#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 10000
int main()
{
	int mt[MAX + 1];
	memset(mt, 1, sizeof(mt));
	mt[1] = 0;
	mt[0] = 0;
	for (int i = 2; i <= MAX ; i++)
	{
		if (!mt[i])
			continue;
		else
		{
			if (i <= sqrt(MAX))
			{
				for (int j = 2; j * i <= MAX; j++)
					mt[j*i] = 0;
			}
		}
	}
	int a, b, half;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d",&b);
		half = b / 2;
		if (mt[half])
			printf("%d %d\n",half, half);
		else
		{
			for (int j = 1; j < half; j++)
			{
				if (mt[half + j] && mt[half - j])
				{
					printf("%d %d\n",half-j,half+j);
					break;
				}
			}
		}
	}
}
