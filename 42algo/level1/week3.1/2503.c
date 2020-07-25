#include <stdio.h>
typedef struct s_ball{
	int num;
	int st;
	int ba;
}	t_b;
int main()
{
	int a;
	scanf("%d",&a);
	t_b b[a];
	for(int i = 0; i<a;i++)
	{
		scanf("%d %d %d",&b[i].num, &b[i].st, &b[i].ba);
	}
	int ii[3];
	int jj[3];
	int ans, count;
	int ss, bb;
	ans = 0;
	for(int i = 123; i<988; i++)
	{
		count = 0;
		ii[0]= i/100;
		ii[1]= (i%100)/10;
		ii[2]= i%10;
		if(ii[0]==ii[1]||ii[1]==ii[2]||ii[2]==ii[0])
			continue;
		for(int j = 0; j<a;j++)
		{
			ss = 0;
			bb = 0;
			jj[0] = b[j].num/100;
			jj[1] = (b[j].num%100)/10;
			jj[2] = b[j].num%10;
			for(int k = 0; k < 3; k++)
			{
				if (ii[k] == jj[k])
					ss++;
				else if (ii[k] == jj[(k+1)%3] || ii[k] == jj[(k+2)%3])
					bb++;
			}
			if (ss == b[j].st && bb == b[j].ba)
				count++;
		}
		if (count == a)
			ans++;
	}
	printf("%d",ans);
}
