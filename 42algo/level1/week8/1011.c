#include <stdio.h>
int main()
{
	long a,start,end,d,ct,out;
	scanf("%ld",&a);
	for(long i = 0; i < a; i++)
	{
		ct = 0;
		out = 0;
		scanf("%ld %ld",&start,&end);
		d = end - start;
		while(1)
		{
			if (d < (ct+1)*2)
				break;
			ct++;
			d -= ct*2;
		}
		out = ct*2;
		if (d <= ct + 1 && d != 0)
			out++;
		else if (d > ct + 1)
			out += 2;
		printf("%ld\n",out);
	}
}
