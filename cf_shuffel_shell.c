#include<stdio.h>

int main(){
int n,i,x,a[]={0,1,2,2,1,0};
scanf("%d",&n);
scanf("%d",&x);
n%=6;
for(i=0;i<6;i+=2){ if((a[(n+(6-i))%6]==x)){ printf("%d\n",(i/2)); break;} }

return 0;}
