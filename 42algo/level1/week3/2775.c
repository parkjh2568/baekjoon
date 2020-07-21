#include <stdio.h>
int ca(int k,int n){if(n==1)return(1);if(k==0)return(n);return(ca(k-1,n)+ca(k,n-1));}int main(){int t,k,n;scanf("%d",&t);while(t--){scanf("%d%d",&k,&n);printf("%d\n",ca(k,n));}}
