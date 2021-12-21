#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   vector<int> g;
   long a,b,c,d,e,f;
   scanf("%ld %ld", &a,&b);
   for(int i = 0;i<a;i++)
   {
       scanf("%ld",&c);
       g.push_back(c);
   }
    sort(g.begin(), g.end());
    auto h = g.begin();
    h = h + b - 1;
    printf("%d",*h);
}