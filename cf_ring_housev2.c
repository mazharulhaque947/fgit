
#include<stdio.h>

int main()

{
    int n,m,a[1000];
    long long b,i,j,k,l;
    scanf("%d %d",&n,&m);
    k=1;
    b=0;
    for(i=0;i<m;i++){ scanf("%lld",&l); if((l-b)<0){ k=k+1;}b=l; }
    l=(k-1)*n+b-1;
    printf("%lld\n",l);
    return 0;
}
