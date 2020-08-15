#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int a,c;
	scanf("%d",&a);
	int b[10001] = {0};
	for(int i = 0;i<a;i++)
	{
		scanf("%d",&c);
		b[c]++;
	}
	for(int i = 0;i<10001;i++)
	{
		if (b[i] > 0)
		{
			while(b[i])
			{
				printf("%d\n",i);
				b[i]--;
			}
		}
	}
}
