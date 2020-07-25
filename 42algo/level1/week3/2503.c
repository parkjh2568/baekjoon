#include <stdio.h>
int sset(int ct[], int b, int c, int d)
{
	if (ct[b-1] == 0 && ct[c-1] == 0 && ct[d-1] == 0)
		return (0);
	else
		return (1);
}
int main()
{
	int ct[9] = {0};
	int set[3] = {0};
	int a;
	int b,c,d;
	scanf("%d",&a);
	int num[a], st[a], ba[a];
	for(int i = 0;i < a;i++)
		scanf("%d %d %d",&num[i], s[i], b[i]);
	for(int i = 0;i < a;i++)
	{
		b = num[i]/100;
		c = (num[i]%100)/10;
		d = num[i]%10;
		if (s[i] == 0 && b[i] == 0)
		{
			ct[b-1]=-1;
			ct[c-1]=-1;
			ct[d-1]=-1;
		}
		else
		{
			if (sset(ct,b,c,d) == 0)
			{
				ct[b-1]=100;
				ct[c-1]=10;
				ct[d-1]=1;
			}
			else if(st[i] > 0 || ba[i] > 0)
			{
				while (s[i])
				{
					if (c[b-1] / 100 == 1)
					{		
						set[0] = b;
						ct[b-1] == 55;
						st[i]--;
					}
					else if (c[c-1] % 100 >= 10 && c[c-1] % 100 <= 11)
					{
						set[1] = c;
						ct[c-1] == 55;
						st[i]--;
					}
					else if (c[d-1] %10 == 1)
					{
						set[2] = d;
						ct[d-1] == 55;
						st[i]--;
					}
					else
						break;
				}
				if (ba[i] > 0 && ct[b-1]!=55 && ct[b-1] < 100 && ct[b-1] >=0)
					ct[b-1] += 100;
				if (ba[i] > 0 && ct[c-1]!=55 && ct[c-1] < 10 && ct[c-1]>=0)
					ct[c-1] += 10;
				if (ba[i] > 0 && ct[d-1]!=55 && ct[d-1] < 1&& ct[d-1]>=0)
					ct[d-1] += 1;
			}	
		}
	}	
}
