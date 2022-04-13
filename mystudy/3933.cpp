#include <iostream>
#include <cmath>
int pow_d[183] = {0};
int data[32770][4] = {{0,0,0,0}};

int main()
{
    for (int i = 1; i < 182; i++)
        pow_d[i] = i*i;
    
    data[1][0] = 1;
    data[1][1] = 0;
    data[1][2] = 0;
    data[1][3] = 0;
    int pow_cnt = 2;
    int temp;
    int temp2;
    int temp3;
    for (int i = 2; i < 32770; i++)
    {
        if (i > pow_d[pow_cnt])
            pow_cnt++;
        else if (i == pow_d[pow_cnt])
            data[i][0] = 1;
        if (i == 25 || i==9)
            printf("muyaho");
        for(int j = pow_cnt-1; j > 0; j--)
        {
            temp = i - pow_d[j];
            temp2 = (int)sqrt((double)temp);
            temp3 = temp - pow_d[temp2];
            if (temp <= pow_d[j])
                data[i][1] += data[temp][0];
            if (temp3 <= pow_d[temp2])
                data[i][2] += data[temp][1];
            data[i][3] += data[temp][2];
        }
    }
    int a = 1;
    while (a!=0)
    {
        scanf("%d", &a);
        printf("%d\n",data[a][0] + data[a][1] + data[a][2] + data[a][3]);
    }
}