#include <stdio.h>
#include <math.h>
void star(int x, int y, int b, int conf)
{
	if (conf == 1)
		printf(" ");
	else if (b == 0)
		printf("*");
	else
	{
		for(int k = pow(3,(b-1));k<(pow(3,(b-1))*2);k++)
		{
			for(int kk = pow(3,(b-1));kk<(pow(3,(b-1))*2);kk++)
				if (x%(int)pow(3,b) == k && y%(int)pow(3,b) == kk)
				{
					conf = 1;
					break;
				}
		}
		star(x,y,(b-1),conf);
	}
}
int main()
{
	int a,b,c;
	b = 0;
	scanf("%d",&a);
	c = a;
	while(c)
	{
		if (c/3 > 0)
			b++;
		c = c/3;
	}
	for(int i = 0; i <a; i++)
	{
		for(int j = 0;j<a;j++)
			star(i,j,b,0);
		printf("\n");
	}
}
