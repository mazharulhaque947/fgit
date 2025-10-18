#include<stdio.h>

int main(){

int n,m,i,k,l,r,u;
scanf("%d",&n);
r=0;
if(n%4==0){ r=1;printf("YES\n");  return 0;}
else if(n%7==0){ r=1; printf("YES\n");  return 0;}
else{
    k=l=m=0;
    while(n>0){
            m++;
        u=n%10;
        if(u==4){ k++;}
        else if(u==7){ l++;}
        n=n/10;
    }
    if(m==k+l){ printf("YES\n");   }
    else { printf("NO\n");   }
}

return 0;}
