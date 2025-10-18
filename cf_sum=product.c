#include<stdio.h>

int main()

{
    int i,j,k,m,n,a[100],t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}
    m=0;
    for(i=0;i<n-1;i++){ for(j=i+1;j<n;j++) {   if(a[i]*a[j]==(i+2+j)){ m+=1; } } }
    printf("%d\n",m);}
    return 0;
}
