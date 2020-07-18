#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d %d %d",&a,&b,&c);
	d = (c-b)/(a-b) + 1;
	printf("%d",d);
}
