#include<stdio.h>

int main()
{
 int a[3],b,c,n,m,k,l,o[3],i;
 scanf("%d %d %d",&a[0],&a[1],&a[2]);
 n=a[0]/3+a[1]/3+a[2]/3;
 l=0;
 for(i=0;i<3;i++){ a[i]%=3; if(a[i]<a[l]){ l=i;} }
 printf("%d\n",n+a[l]);
 return 0;
}
