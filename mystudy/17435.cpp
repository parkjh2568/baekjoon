#include <iostream>
int b[21][200003];
/*
0=1
1=2
2=4
3=8
4=16
5=32
6=64
7=128
8=256
9=512
10=1024
11=2048
12=4096
13=8192
14=16384
15=32768
16=65536
17=131072
18=262144
 */
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        scanf("%d", &b[0][i]);
    for (int j = 0; j < 19; j++)
        for (int i = 1; i <= a; i++)
            b[j + 1][i] = b[j][b[j][i]];
    int c, d, e;
    int temp, temp2;
    scanf("%d", &c);
    while (c--)
    {
        scanf("%d %d", &d, &e);
        temp = 262144;
        for(int i = 18; i >=0 ;i--)
        {
            if (d/temp == 1)
                e = b[i][e];
            d %= temp;
            temp /= 2;
        }
        printf("%d\n",e);
    }
}