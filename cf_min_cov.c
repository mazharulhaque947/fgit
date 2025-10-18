#include<stdio.h>

int main()
{
    int a[100],b[100],i,k,j,l,r,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){  scanf("%d %d",&a[i],&b[i]); if(i==0){ r=b[0]; l=a[0];  }else{ if(a[i]<l){l=a[i]; } if(b[i]>r){ r=b[i]; } } }
    k=0;
    for(i=0;i<n;i++){   if( a[i]<=l&&b[i]>=r ){ k=1;  break ;} }
    if(k==0){ printf("-1\n");}
    else{  printf("%d\n",1+i);}
    return 0;
}
