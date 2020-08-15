#include <stdio.h>

char *trans (char a)
{
	if (a == '0')
		return ("000");
	else if (a == '1')
		return ("001");
	else if (a == '2')
		return ("010");
	else if (a == '3')
		return ("011");
	else if (a == '4')
		return ("100");
	else if (a == '5')
		return ("101");
	else if (a == '6')
		return ("110");
	else
		return ("111");
}
char *trans_2 (char a)
{
	if (a == '0')
		return ("");
	else if (a == '1')
		return ("1");
	else if (a == '2')
		return ("10");
	else if (a == '3')
		return ("11");
	else if (a == '4')
		return ("100");
	else if (a == '5')
		return ("101");
	else if (a == '6')
		return ("110");
	else
		return ("111");
}

int main()
{
	int a,c;
	int d;
	char b[10];
	c = 0;
	scanf("%d",&a);
	if ( a== 0)
		printf("0");
	else
	{
		while (a > 0)
		{
			b[c] = (a%10) + '0';
			c++;
			a = a / 10;
		}
		d = c;
		while (c--)
		{
			if (d - 1 == c)
				printf("%s",trans_2(b[c]));
			else
			printf("%s",trans(b[c]));
		}
	}
}
