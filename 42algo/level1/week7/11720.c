#include <stdio.h>
int main()
{
	int a, c;
	char b[101];
	scanf("%d",&a);
	c = 0;
	scanf("%s",b);
	for(int i = 0; i < a; i++)
	{
		c += b[i] - '0';
	}
	printf("%d",c);
}
