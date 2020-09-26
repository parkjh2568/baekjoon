#include <stdio.h>
int ft_recursive(int ct)
{
	if (ct == 1)
		return(1);
	else
		return (ct * ft_recursive(ct-1));
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b = ft_recursive(a);
	printf("%d",b);
}
