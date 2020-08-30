#include <stdio.h>
#include <string.h>
int trans(char c)
{
	if (c == 'C' || c == 'A' || c == 'B')
		return (3);
	else if (c == 'F' || c == 'D' || c == 'E')
		return (4);
	else if (c == 'I' || c == 'G' || c == 'H')
		return (5);
	else if (c == 'L' || c == 'J' || c == 'K')
		return (6);
	else if (c == 'O' || c == 'M' || c == 'N')
		return (7);
	else if (c == 'S' || c == 'P' || c == 'Q' || c=='R')
		return (8);
	else if (c == 'V' || c == 'T' || c == 'U')
		return (9);
	else if (c == 'Z' || c == 'W' || c == 'X'|| c== 'Y')
		return (10);
	else
		return (0);
}
int main()
{
	int c;
	c = 0;
	for(int i = 0; i <= 15; i++)
		c += trans(getchar());
	printf("%d",c);
}
