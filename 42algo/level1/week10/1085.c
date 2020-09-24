#include <stdio.h>
int main()
{
	int a, b, c, d, aa, bb;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	aa = ((c-a)>(d-b) ? (d-b) : (c-a));
	bb = (a > b ? b : a);
	printf("%d",(aa>bb ? bb : aa));
}
