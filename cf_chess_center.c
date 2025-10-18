#include<stdio.h>
int main()
{  int t;
    long long  a,i,j,k;
    scanf("%d",&t);
    while(t--){
    scanf("%lld",&a);
    k=0;
    for(i=a;i>1;i=i-2){ k=k+(i-1)*2*(i-1);  }
    printf("%lld\n",k);}
    return 0;
}
