#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int mt[(123456 * 2) + 1];
	memset(mt, 1, sizeof(mt));
	mt[1] = 0;
	mt[0] = 0;
	for (int i = 2; i <= 123456 * 2 ; i++)
	{
		if (!mt[i])
			continue;
		else
		{
			if (i <= sqrt(123456 * 2))
			{
				for (int j = 2; j * i <= 123456 * 2; j++)
					mt[j*i] = 0;
			}
		}
	}
	int a;
	int ct;
	scanf("%d",&a);
	while (a)
	{
		ct = 0;
		for (int i = a + 1; i > a && i <= 2*a; i++)
		{
			if (mt[i])
				ct++;
		}
		printf("%d\n",ct);
		scanf("%d",&a);
	}
}
