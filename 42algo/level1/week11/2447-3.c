#include <stdio.h>
void star(int x, int y, int a, char b[a][a], int con)
{
	int cnt = 0;
	if (a == 1 && con == 0)
	{
		b[x][y] = '*';
		return;
	}
	else if (a == 1)
	{
		b[x][y] = 'a';
		return;
	}
	for(int i = 0;i <3;i++)
	{
		for(int j = 0;j <3;j++)
		{
			cnt++;
			if (cnt != 5)
				star(x+(i*(a/3)), y+(j*(a/3)),a/3,b,0);
			else	
				star(x+(i*(a/3)), y+(j*(a/3)),a/3,b,1);
		}
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	char b[a][a];
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
			printf("%c",b[i][j]);
		printf("\n");
	}
	star(0,0,a,b,0);
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
			printf("%c",b[i][j]);
		printf("\n");
	}
}
