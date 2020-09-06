#include <stdio.h>
int main()
{
	long a, befor, after;
	scanf("%ld",&a);
	befor = 0;
	after = 1;
	while(1)
	{
		if (a <= (after + (befor * 6)))
			break;
		after += befor * 6;
		befor++;
	}
	printf("%ld",befor+1);
}
