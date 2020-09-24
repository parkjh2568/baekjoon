#include <stdio.h>
int main()
{
	int a[4],b[4],sa,sb;
	for(int i = 0; i <3; i++)
		scanf("%d %d",&a[i],&b[i]);
	a[3] = (a[0] == a[1] ? a[2] : (a[1] == a[2] ? a[0] : a[1]));
	b[3] = (b[0] == b[1] ? b[2] : (b[1] == b[2] ? b[0] : b[1]));
	printf("%d %d",a[3],b[3]);
}
