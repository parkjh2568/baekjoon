#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, c;
	double b, d, e, g;
	double *f;
	scanf("%d ", &a);
	while(a--)
	{
		scanf("%lf ", &b);
		d = 0;
		f = malloc(sizeof(double) * b);
		for (c = 0; c < b; c++)
		{
			scanf("%lf ",&f[c]);
			d = d + f[c];
		}
		d = d / b;
		e = 0;
		for (c = 0; c<b;c++)
		{
			if (f[c] > d)
				e++;
		}
		g = ((e/b)*100);
		printf("%.3lf\%\n",g);
		b = 0;
		free(f);
	}
}
