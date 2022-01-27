#include <iostream>
#include <vector>
#include <string>
using namespace std;

char BB[8][8] = {
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}
};

char WW[8][8] = {
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}
};

int main()
{
    int a, b;
    cin >> a >> b;
    char c[51][51];
    char d;
    for(int i = 0; i < a; i ++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> c[i][j];
        }
    }
    int cnt = 2147483647;
    int cbb;
    int wbb;
    for(int i = 0; i <= a-8;i++)
    {
        for(int j = 0; j <= b-8;j++)
        {
            cbb = 0;
            wbb = 0;
            for(int ii = 0; ii < 8; ii++)
            {
                for(int jj = 0; jj < 8; jj++)
                {
                    if (BB[ii][jj] != c[i+ii][j+jj])
                        cbb++;
                    if (WW[ii][jj] != c[i+ii][j+jj])
                        wbb++;
                }
            }
            if (cnt > cbb)
                cnt = cbb;
            if (cnt > wbb)
                cnt = wbb;
        }
    }
    cout<<cnt;
}