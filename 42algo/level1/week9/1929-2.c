#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	int mt[b+2];
	memset(mt, 1, sizeof(mt));
	mt[1] = 0;
	mt[0] = 0;
	for (int i = 2; i <= b; i++)
	{
		if (!mt[i])
			continue;
		else
		{
			if (i >= a)
				printf("%d\n",i);
			if (i <= sqrt(b))
			{
				for (int j = 2; j * i <= b; j++)
					mt[j*i] = 0;
			}
		}
	}
}
