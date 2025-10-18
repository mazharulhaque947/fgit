#include<stdio.h>

int main()
{
    int a[100],i,j,k,l,m,n,s;
    scanf("%d",&n);

    k=0;
    s=0;
    for(i=0;i<n;i++){ scanf("%d",&a[i]);if(i==0){ m=0; } s=s+m-a[i];  if(s<k){ k=s;} m=a[i]; }
    //s=(0-a[0]);
    printf("%d",-1*k);


    return 0;
}
