#include <stdio.h>
void star(int x, int y, int b, int conf, int b2)
{
	if (conf == 1)
		printf(" ");
	else if (b == b2)
		printf("*");
	else
	{
		for(int k = b2;k<(b2)*2;k++)
		{
			for(int kk = b2;kk<(b2)*2;kk++)
				if (x%(b2*3) == k && y%(b2*3) == kk)
				{
					conf = 1;
					break;
				}
		}
		star(x,y,b,conf,b2*3);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	for(int i = 0; i <a; i++)
	{
		for(int j = 0;j<a;j++)
			star(i,j,a,0,1);
		printf("\n");
	}
}
