#include <stdio.h>
int main()
{
	int a[3], b[3], i;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	scanf("%d %d %d", &b[0], &b[1], &b[2]);
	double c,d,e,f;
	f = 9999;
	c = (double)a[0]/b[0];
	d = (double)a[1]/b[1];
	e = (double)a[2]/b[2];
	if (f > c)
	{
		f = c;
		i = 0;
	}
	if (f > d)
	{
		f = d;
		i = 1;
	}
	if (f > e)
	{
		f = e;
		i = 2;
	}
	switch(i)
	{
		case 0 :
			printf("%lf %lf %lf",(c - c),(a[1] - (b[1] * c)),(a[2] - (b[2] *c)));
			break;
		case 1 :
			printf("%lf %lf %lf",(a[0] - (b[0]*d)),(d - d),(a[2] - (b[2]*d)));
			break;	
		case 2 :
			printf("%lf %lf %lf",(a[0] - (b[0]*e)),(a[1]-(b[1]* e)),(e - e));
			break;
	}
}
