#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
double calcule(int a[2], int b[2], int c[2])
{
    float x,y,z;
    double out;
    x = a[0]*b[1] + b[0]*c[1] + c[0]*a[1];
    y = a[1]*b[0] + b[1]*c[0] + c[1]*a[0];
    z = x-y;
    if (z < 0)
        z *= (-1);
    out = (static_cast<double>(z))/2;
    return ((double)(z/2));
}

double length(double x, double y, int a[2])
{
    double out;
    double xx, yy;

    xx = (x-a[0])*(x-a[0]);
    yy = (y-a[1])*(y-a[1]);
    out = sqrt(xx+yy);
    return (out);
}

int main()
{
    int c;
    int end_flag;
    int data[2001][2];
    double x,y;
    double big, small;
    double temp;
    end_flag = 0;
    scanf("%d", &c);
    for(;c!=0;cin>>c)
    {
        big = 1.175494351E-38, small = 3.402823466E+38;
        x = 0;
        y = 0;
        for(int i = 0; i < c*2; i++)
        {
            scanf("%d",&data[i/2][i%2]);
            if (i%2 == 0)
                x += data[i/2][i%2];
            else
                y += data[i/2][i%2];
        }
        x /= c;
        y /= c;
        for(int i = 0; i < c; i++)
        {
            printf("(%d, %d) = %.1lf\n",data[i][0],data[i][1], length(x, y, data[i]));
        }
        for(int i = 0; i < c; i++)
        {
            for(int j = i+1; j < c; j++)
            {
                for(int k = j+1; k < c; k++)
                {
                    temp = calcule(data[i],data[j],data[k]);
                    if (big < temp)
                        big = temp;
                    if (small > temp)
                        small = temp;
                }
            }
        }
        printf("%.1lf %.1lf\n",small, big);
    }

}