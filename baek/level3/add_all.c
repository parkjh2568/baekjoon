#include <stdio.h>
int main()
{
	int a;
	int j;
	j = 0;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++)
		j = j + i; 
	printf("%d",j);
}
