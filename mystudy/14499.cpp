#include <iostream>
using namespace std;
/*
  1
3 0 2
  4
  5
    ------
  /  0   /
  ------  |
 |   1  |2|
 |      |/
  ------
*/
struct ppap
{
    int o[6] = {0};
    int t[21][21] = {0};
    int x;
    int y;
    int n;
    int s;
    int q;
    int h;
    int m;
};

void z(ppap *a)
{
    if (a->t[a->x][a->y] == 0)
        a->t[a->x][a->y] = a->o[5 - a->n];
    else
    {
        a->o[5 - a->n] = a->t[a->x][a->y];
        a->t[a->x][a->y] = 0;
    }
    cout <<a->o[a->n]<<"\n";
}

void w_h(ppap *a)
{
    int p;
    p = a->n;
    a->n = a->m;
    a->h = p;
    a->m = 5 - p;
    a->x -= 1;
    z(a);
}

void w_m(ppap *a)
{
    int p;
    p = a->n;
    a->n = a->h;
    a->h = 5 - p;
    a->m = p;
    a->x += 1;
    z(a);
}

void w_s(ppap *a)
{
    int p;
    p = a->n;
    a->n = a->q;
    a->q = 5 - p;
    a->s = p;
    a->y += 1;
    z(a);
}

void w_q(ppap *a)
{
    int p;
    p = a->n;
    a->n = a->s;
    a->q = p;
    a->s = 5 - p;
    a->y -= 1;
    z(a);
}

int main()
{
    int a, b, c;
    ppap muyaho;

    cin >> a>>b>>muyaho.x>>muyaho.y>>c;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b;j++)
            cin>>muyaho.t[i][j];
    }
    muyaho.n = 0;
    muyaho.s = 2;
    muyaho.q = 3;
    muyaho.m = 1;
    muyaho.h = 4;
    int e;
    for(int i = 0; i < c; i++)
    {
        cin>>e;
        if (e == 3 && muyaho.x > 0)
        {w_h(&muyaho);}
        else if (e == 4 && muyaho.x < a-1)
        {w_m(&muyaho);}
        else if (e==2 && muyaho.y > 0)
        {w_q(&muyaho);}
        else if (e==1 && muyaho.y < b-1)
        {w_s(&muyaho);}
    }

}