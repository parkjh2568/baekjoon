#include <stdio.h>
#include <math.h>
int main()
{
	int lop;
	int x[3];
	int y[3];
	float dis_a,dis_b,dis_c, xl, yl, sm, la;
	scanf("%d",&lop);
	for(int j = 0;j<lop;j++)
	{
		for(int i = 0;i<3;i++)
			scanf("%d",&x[i]);
		for(int i = 0;i<3;i++)
			scanf("%d",&y[i]);
		xl = y[0] - x[0];
		yl = y[1] - x[1];
		dis_a = sqrt((xl*xl)+(yl*yl));
		dis_b = x[2] + y[2];
		if (x[2] > y[2])
		{
			sm = y[2];
			la = x[2];
		}
		else
		{
			sm = x[2];
			la = y[2];
		}
		dis_c = la - sm;
		if (dis_a == 0 && x[2] == y[2])
			printf("-1\n");
		else if(dis_a > dis_b || (dis_a + sm < la) || dis_a == 0)
			printf("0\n");
		else if (dis_a == dis_b || (dis_a + sm == la))
			printf("1\n");
		else
			printf("2\n");
	}
}
