#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000000];
	int b, c;
	scanf("%[^\n]",&*a);
	b = strlen(a);
	c = 0;
	int count = 1;
	for(int i = 0;i < b;i++)
	{
			if(a[i] == ' ') count = 1;
			else if(count)
			{
				count = 0;
				c++;
			}
	}
	printf("%d",c);
}
