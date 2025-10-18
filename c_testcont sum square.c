#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,a[100],b[100],t;
    scanf("%d",&t);
    while(t--)
    {


    n=0;
    l=0;
   // m=1000;
   scanf("%d",&m);
   // for(i=2;i<m;i++){ n=n+i; j=sqrt(n); if(j*j==n){ a[l]=i; l++; } }
   if(m==1){  printf("-1\n");}
   else{
    for(i=1;i<=m;i++){   n=n+i;j=sqrt(n); if(j*j==n){n=n+i+1; if(i!=m){a[i-1]=(i+1);a[i]=i; i++;} else{ a[m-1]=a[0]; a[0]=m;} } else{ a[i-1]=i; } }
    for(i=0;i<m;i++){ printf("%d ",a[i]);  }
    printf("\n");
   }
    }
    return 0;
}
