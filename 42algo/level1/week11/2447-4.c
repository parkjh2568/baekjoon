#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void star(int x, int y, int a, char **b)
{
	int cnt = 0;
	if (a == 1)
	{
		b[x][y] = '*';
		return;
	}

	for(int i = 0;i <3;i++)
	{
		for(int j = 0;j <3;j++)
		{
			cnt++;
			if (cnt != 5)
				star(x+(i*(a/3)), y+(j*(a/3)),a/3,b);
		}
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	char **b;
	b =(char **)malloc(sizeof(char *) * (a+1));
	for(int i = 0; i < a; i++)
		b[i] = (char *)malloc(sizeof(char) * (a+1));
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
			b[i][j] = ' ';
	}
	star(0,0,a,b);
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
			printf("%c",b[i][j]);
		printf("\n");
	}
	for(int i = 0; i < a; i++)
		free(b[i]);
	free(b);
}
