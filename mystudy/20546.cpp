#include <iostream>
int main()
{
int j,s,b[14],c,n,v,z,t,u,x,y;
v=0,n=0,c=13,z=0;
scanf("%d",&x);
y=x;
c=14;
while(c--)
{
scanf("%d",&b[13-c]);
if(x/b[13-c]>0)
{
n+=x/b[13-c];
x-=n*b[13-c];
}
if(c!=13)
{
if(t>b[13-c]&&v<=0)
v--;
else if(t<b[13-c]&&v>=0)
v++;
else if(t>b[13-c]&&v>=0)
v=-1;
else if(t<b[13-c]&&v<=0)
v=1;
if(v<=-3)
if(y/b[13-c]>0)
{
u=y/b[13-c];
z+=u;
y-=u*b[13-c];
}
if(v>=3)
if(z!=0)
{
y+=z*b[13-c];
z=0;
}
t=b[13-c];
}
else
t=b[0];
}
j=b[13]*n+x;
s=b[13]*z+y;
if(j>s)
printf("BNP");
else if(j<s)
printf("TIMING");
else
printf("SAMESAME");
}