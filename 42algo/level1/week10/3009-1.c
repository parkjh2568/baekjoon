#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
	printf("%d %d",a^c^e,b^d^f);
}
