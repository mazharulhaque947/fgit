#include<stdio.h>

int co(const void *a , const void *b )
{
    return (*(int *)a-*(int *)b);

}
int main()
{
    int a[100],n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){ scanf("%d",&a[i]); }

    qsort(a,m,sizeof(int),co);
     //for(i=0;i<m;i++){ printf("%d    ",a[i]); }
    k=a[n-1]-a[0];
    for(i=0;i<m-n+1;i++){ if(j=a[n+i-1]-a[i], k>j ){ k=j; }  }

    printf("%d\n",k);
    return 0;
}
