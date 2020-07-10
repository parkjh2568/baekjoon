#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int b,c,d,e;
	b = 97;
	scanf("%s",&*a);
	c = strlen(a);
	while (b <= 122)
	{
		d = 0;
		e = 0;
		while (d < c)
		{
			if (a[d] == (char)b)
			{
				printf("%d",d);
				e = 1;
				break;
			}
			d++;
		}
		if (e == 0)
			printf("-1 ");
		else if (b != 122)
			printf(" ");
		b++;
	}
}
