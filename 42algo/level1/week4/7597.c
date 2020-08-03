#include <stdio.h>
int main()
{
	char a[251];
	int aa, bb, A, B;

	while(1)
	{
	aa = 0;
	bb = 0;
	A = 0;
	B = 0;
	scanf("%s",a);
	if (a[0] == '#')
		break;
	for(int i = 0; a[i] != 0; i++)
	{
		if (a[i] == 'A')
			aa++;
		else if(a[i] == 'B')
			bb++;
		if (aa == 3 && bb == 3)
		{
			aa--;
			bb--;
		}
		else if (aa == 4)
		{
			A++;
			aa = 0;
			bb = 0;
		}
		else if (bb == 4)
		{
			B++;
			aa = 0;
			bb = 0;
		}
	}
	printf("A %d B %d\n",A,B);
	}}
