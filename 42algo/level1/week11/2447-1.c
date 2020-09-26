#include <stdio.h>
void star(int x, int y, int b, int conf)
{
	if (conf == 1)
		printf(" ");
	else if (b == 0)
		printf("*");
	else
	{
		for(int k = b/3;k<(b/3)*2;k++)
		{
			for(int kk = b/3;kk<(b/3)*2;kk++)
				if (x%b == k && y%b == kk)
				{
					conf = 1;
					break;
				}
		}
		star(x,y,(b/3),conf);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	for(int i = 0; i <a; i++)
	{
		for(int j = 0;j<a;j++)
			star(i,j,a,0);
		printf("\n");
	}
}
