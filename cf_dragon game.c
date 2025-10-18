#include<stdio.h>

int main()
{
    int i,j,k,l,p,n,m,a[100],b[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){  scanf("%d %d",&a[i],&b[i]);}
    for(i=0;i<n-1;i++){ p=i; for(j=i+1;j<n;j++){  if(a[p]>a[j]){ p=j;} } m=a[i] ;l=b[i];a[i]=a[p]; b[i]=b[p];b[p]=l;a[p]=m;  }
    m=0;
    for(i=0;i<n;i++){  if(k>a[i]){ k=k+b[i];  } else{ m=5; break; } }
    if(m==0){  printf("YES\n");}
    else{  printf("NO\n"); }
    return 0;
}
