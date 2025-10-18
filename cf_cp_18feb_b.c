#include<stdio.h>

int main()
{
  int t,i,j,k,n,m,a[100];
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
      for(i=0;i<n-2;i++){scanf("%d",&a[i]); }
      k=1;
      if(n<=4){ k=1;printf("YES\n");}
      else{
       for(i=0;i<n-2-2;i++){if(a[i]==1&&a[i+1]==0&&a[i+2]==1){ k=0; break;} }
     if(k==1){ printf("YES\n");}
     else{ printf("NO\n");}}
  }


    return 0;
}
