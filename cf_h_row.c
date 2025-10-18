#include<stdio.h>

int main()
{
    int t,a,b,c,d,i,j,k;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    k=(b-d)+(a-c)*(2*b-1);
    printf("%d\n",k);}
    return 0;

}
