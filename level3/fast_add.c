#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d",&a);
	for(;a > 0;a--)
	{
		scanf("%d %d",&b,&c);
		printf("%d\n",b+c);
	}
}
