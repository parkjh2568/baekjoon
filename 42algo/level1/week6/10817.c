#include <stdio.h>
int ft_ct(int a, int b, int c)
{
	int count;
	count = 0;
	if (a > b)
		count++;
	if (a > c)
		count++;
	if (count == 1)
		return (1);
	else
		return (0);
}
int main()
{
	int a,b,c;
	scanf("%d %d %d" ,&a, &b, &c);
	if (ft_ct(a,b,c))
		printf("%d",a);
	else if (ft_ct(b,a,c))
		printf("%d",b);
	else
		printf("%d",c);
}
