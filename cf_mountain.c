#include<stdio.h>

int main()
{
   int a[100],i,j,k,n,l;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<(2*n+1);i++){ scanf("%d",&a[i]); }
    l=0;
    for(i=1;i<(2*n+1);i=i+2)
    {
        if(a[i-1]<a[i]-1 && a[i]-1>a[i+1]){ l=l+1; a[i]=a[i]-1;}
        if(l==k){ break ;}
    }
    for(i=0;i<(2*n+1);i=i+1)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
