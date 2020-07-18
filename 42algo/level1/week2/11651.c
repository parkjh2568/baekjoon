#include <stdio.h>
int main()
{
	int a,c,d,f;
	scanf("%d",&a);
	int x[a], y[a];
	for(int b = 0;b<a;b++)
	{
		scanf("%d %d",&x[b],&y[b]);
	}
	for(int i = 0;i<a-1;i++)
	{
		f = 0;
		for(int b = i+1;b<a;b++)
		{
			if(y[i] > y[b])
			{
				f = 2;
				c = y[i];
				y[i] = y[b];
				y[b] = c;
				c = x[i];
				x[i] = x[b];
				x[b] = c;
			}
			else if (y[i] == y[b] && x[i] > x[b])
			{
				f = 2;
				c = x[i];
				x[i] = x[b];
				x[b] = c;
			}
		}
		if (f == 0)
			break;
	}
	d = 0;
	while(d<a)
	{
		printf("%d %d\n",x[d],y[d]);
		d++;
	}
}
