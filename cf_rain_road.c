#include<stdio.h>

int main()
{   int n,i,k,j,l,m,a[1000],b[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]); }
    b[0]=a[0];
    b[n]=a[n-1];
    for(i=1;i<n;i++){ m=a[i]; if(a[i-1]>a[i]){m=a[i-1];}b[i]=m; }
    k=b[0];
    for(i=0;i<=n;i++){  if(b[i]<k){k=b[i];} }
    printf("%d\n",k);
    return 0;
}
