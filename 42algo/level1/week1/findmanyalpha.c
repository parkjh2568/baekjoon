#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000000];
	char b, c;
	int d, e;
	int f[26] = {0};
	b = 'A';
	scanf("%s",&*a);
	d = strlen(a);
	for(int i = 0;i < d;i++)
	{
		for(int j = 0;j < 26;j++)
		{
			if (a[i] == (b + j) || a[i] == (b + j + 32))
			{
				f[j]++;
				break;
			}
		}
	}
	e = 0;
	for(int k = 0;k < 26;k++)
	{
		if(f[k] > e)
		{
			e = f[k];
			b = 'A' + k;
		}
	}
	int count = 0;
	for(int l = 0;l < 26;l++)
	{
		if(f[l] == e)
			count++;
	}
	if (count != 1)
		printf("?");
	else
		printf("%c",b);
}
