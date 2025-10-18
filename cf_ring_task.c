#include<stdio.h>

int main()

{
    int n,m,a[1000],i,j,k,l;
    scanf("%d %d",&n,&m);
    k=1;
    for(i=0;i<m;i++){ scanf("%d",&a[i]);if(i>0){ if(a[i]-a[i-1]<0){ k=k+1;} } }
    l=(k-1)*n+a[m-1];
    printf("%d\n",l);
    return 0;
}
