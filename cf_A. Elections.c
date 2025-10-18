#include<stdio.h>
# define lll(n) for(i=0;i<n;i++)
int main
()

{
    int a[100][100],i,j,k,n,m,b[100];
    lll(n){ b[i]=0;}
    scanf("%d %d",&n,&m);
   // for(i=0;i<m;i++)
   lll(m)
   {  k=0;
       for(j=0;j<n;j++)
       {

          scanf("%d",&a[i][j]);
          if(a[i][j]>a[i][k]){ k= j; }

       }
       b[k]=b[k]+1;

   }
k=0;
lll(n){ if(b[i]>b[k]){ k=i; } }

   printf("%d\n",k+1);
    return 0;
}
