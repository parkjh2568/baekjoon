#include<stdio.h>
void f(int x,int y,int s){
    if(x/s%3==1&&y/s%3==1)printf(" ");
else{
        if(s/3==0)printf("*");
        else f(x,y,s/3);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            f(i,j,n);
        }
        puts("");
    }
} 
