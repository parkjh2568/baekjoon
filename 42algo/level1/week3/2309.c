#include <stdio.h>
#include <stdlib.h>

int sum_b(int b[8])
{
	int tot;
	tot = 0;
	for(int i = 0; i < 7; i++)
		tot += b[i];
	return (tot);
}
void find_sum(int i, int b[8], int a[10])
{
	int k = 1;
	int sss;
	if (i < 7 && sum_b(b) != 100 && i >= 0)
	{
		while(k<3)
		{
			b[i] = a[i+k];
			sss = sum_b(b);
			if ((i != 6 && b[i] == b[i+1]) || sss > 100)
			{
				b[i] = a[i+k-1];
				find_sum(i-1,b,a);
				break;
			}
			else if (sss == 100)
				break;
			else
				find_sum(i-1,b,a);
		}
	}
}
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	if (num1<num2)
		return -1;
	if (num1>num2)
		return 1;
	return 0;
}

int main()
{
	int a[10];
	int b[8];
	int c, set;
	set = 0;
	for (int i = 0; i<9;i++)
		scanf("%d",&a[i]);
	qsort(a, 9,sizeof(int),compare);
	for (int i = 0; i < 7; i++)
		b[i] = a[i];
	find_sum(6,b,a);
	for (int i = 0; i<7; i++)
	{
		printf("%d\n",b[i]);
	}
}
