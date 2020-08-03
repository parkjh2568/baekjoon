#include <stdio.h>
#include <math.h>
//gcc -o 4706 4706.c -lm 으로 -lm명령어를 추가함으로 해결가능, 디폴트로 math.h가 포함이안되서이
int main()
{
        double a, b, c;
        while(1)
        {
        scanf("%lf %lf",&a,&b);
        if (a == 0 && b == 0)
                break;
        c = b/a;
        c = c * c;
        c = c - 1;
        c = c * (-1);
        printf("%0.3lf\n",sqrt(c));
        }
}
