#include <stdio.h>
int ft_strlen(char *c)
{
	int i = 0;
	while(c[i])
		i++;
	return (i);
}
int main()
{
	int a,b,len, trig;
	char c[101];
	char d;
	b = 0;
	scanf("%d",&a);
	while(a--)
	{
		trig = 0;
		scanf("%s",c);
		len  = ft_strlen(c);
		for(int i = 0;i<len;i++)
		{
			if(c != 0)
			{
				d = c[i];
				for(int j = i;j<len;j++)
				{
					if (d == 0)
						break;
					if (c[j] == d)
						c[j] = 0;
					else
						break;
				}
				for(int j = i;j<len;j++)
				{
					if (d == 0)
						break;
					if (c[j] == d)
					{
						trig = 99;
						break;
					}
				}
			}
			if (trig != 0)
				break;
		}
		if (trig == 0)
		{
			b++;
		}
	}
	printf("%d",b);
}
