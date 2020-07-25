#include <stdio.h>
#include <string.h>
int main()
{
	char a[21];
	char b[] = {'a','e','i','o','u',0};
	int cta,ctb,ctc, cte,len;
	char aa;
	while(scanf("%s",a))
	{
		cta = 0;
		ctb = 0;
		cte = -2;
		aa = 0;
		if (strlen(a) == 3 && a[0] == 'e' && a[1] == 'n' && a[2] == 'd')
			break;
		len = strlen(a);
		for(int i = 0;i<len;i++)
		{	
			ctc = 0;
			for(int j = 0;b[j];j++)
			{
				if (b[j] == a[i])
				{
					cte = 0;
					if (ctb == 0)
					{
						ctb++;
						aa = b[j];
						ctc = 99;
						break;
					}
					else if (ctb == 1)
					{
						if (aa == 'e' && aa == b[j])
						{
							ctb++;
							ctc = 99;
							break;
						}
						else if (aa == 'o' && aa == b[j])
						{
							ctb++;
							ctc = 99;
							break;
						}
						else if (aa == b[j])
						{
							ctc = -99;
							break;
						}
						else
						{
							ctb++;
							ctc = 99;
						}
					}
					else
					{
						ctc = -99;
						break;
					}
				}
			}
			if (ctc < 0)
			{
				cte = 22;
				break;
			}
			else if (ctc == 0)
			{
				ctb = 0;
				if (cta == 0)
				{
					cta++;
					aa = a[i];
				}
				else if (cta == 1)
				{
					if (aa == a[i])
					{		
						cte = 22;
						break;
					}
					else
						cta++;
				}
				else
				{
						cte = 22;
						break;
				}
			}
			else
				cta = 0;
		}
		if (cte == 0)
			printf("<%s> is acceptable.\n",a);
		else
			printf("<%s> is not acceptable.\n",a);
	}
}
