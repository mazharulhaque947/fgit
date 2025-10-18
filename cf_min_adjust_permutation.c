#include<stdio.h>
#include<stdlib.h>
int co( const void *a,const void *b ){
return ( *(int *)a - *(int *)b);
}
int main()
{
    int a[100],i,j,k,n,m;
    scanf("%d",&n);

    for(i=0;i<n;i++){ scanf("%d",&a[i]);  }
    qsort(a,n,sizeof(int),co);
    k=0;
    for(i=0;i<n;i++){ m=((i+1)-a[i]); if(m<0){m=m*-1;}k=k+m; }
    printf("%d",k);
    return 0;
}
