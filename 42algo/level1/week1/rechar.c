#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, d;
	char c[20];
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d",&b);
		scanf("%s",&*c);
		d = strlen(c);
		for(int i = 0;i < d;i++)
		{
			for(int j = 0;j < b;j++)
				printf("%c",c[i]);
		}
		printf("\n");
	}
}
