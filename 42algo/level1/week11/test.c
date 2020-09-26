#include <stdio.h>
#include<math.h>
int main()
{
	int b=2;
		for(int k = pow(3,(b-1));k<(pow(3,(b-1))*2);k++)
		{
			printf("b = %d k = %d pow(3,b) = %d, pow(3,(b-1)) = %d\n",b,k,(int)pow(3,b),(int)(pow(3,(b-1))));
		}
}
