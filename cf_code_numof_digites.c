#include<stdio.h>

int main()
{

    int a,b,c[10],i,j,k,l;
    scanf("%d %d",&a,&b);
    for(i=0;i<10;i++){ c[i]=0;}
    for(i=a;i<=b;i++){ k=i; while(k>0){ c[k%10]=c[k%10]+1;k=k/10;} }
    for(i=0;i<10;i++){ printf("%d ",c[i]);}
    printf("\n");
}
