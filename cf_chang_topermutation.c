#include<stdio.h>

int main()
{ int i,j,k,n,m,a[5005],b[5005];
  scanf("%d",&n);
   for(i=0;i<5005;i++){ a[i]=0;}

   for(i=0;i<n;i++){ scanf("%d",&b[i]);a[b[i]]+=1;}
  m=0;
  for(i=1;i<=n;i++){ if(a[i]==0){ m+=1;}  }
  printf("%d\n",m);
    return 0;
}
