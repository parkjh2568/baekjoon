#include <stdio.h>

void find_a(int a[10], int sum)
{
	int b, c;
	b = 0;
	c = 0;
	for(int i = 8; i >=0; i--)
	{
		for(int j = i-1; j >=0; j--)
		{
			if ((sum - a[i] - a[j] == 100))
			{
				b = i;
				c = j;
				break;
			}
		}
		if(b != 0)
			break;
	}
	for(int i = 0; i < 9; i++)
	{
		if (i != b && i != c)
			printf("%d\n",a[i]);
	}
}

int main()
{
    int a[10];
    int b[8];
    int c, set;
    set = 0;
    for (int i = 0; i<9;i++)
	{
            scanf("%d",&a[i]);
			set += a[i];
	}
    for (int i = 0; i<9;i++)
    {
            for (int j = 0; j<8;j++)
            {
                    if (a[j] > a[j+1])
                    {
                            c = a[j];
                            a[j] = a[j+1];
                            a[j+1] = c;
                    }
            }
    }
    find_a(a,set);
}
