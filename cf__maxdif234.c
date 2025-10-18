#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {

       scanf("%d",&n);
       j=0;
       for(i=1;i<=n;i=i+2){a[j]=i; j=j+1;}
       m=0;
        for(i=2;i<=n;i=i+2){b[j]=i; m=m+1;}
        k=b[(n/2)-2+(n%2)];
printf("%d ",k);
        a[j]=k;
        for(i=0;i<((n/2)-(n%2));i++){ b[(n/2)-2+(n%2)-i]=b[(n/2)-2+(n%2)-i-1]; printf(" %d",b[(n/2)-2+(n%2)-i-1]); }

    }


    return 0;
}
