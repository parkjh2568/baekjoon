#include <stdio.h>
int main()
{
        int a,b;
        for(scanf("%d",&a),b=1;a;)
            b *= a--;
        printf("%d",b);
}
