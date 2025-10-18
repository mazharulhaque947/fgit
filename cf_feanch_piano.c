#include<stdio.h>

int main()
{
    int n,k,i,j,l,m,o,p,a[100],b[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}
    o=n-k+1;
    b[0]=0;
    for(i=0;i<k;i++){b[0]=b[0]+a[i]; }
    p=b[0];
    l=1;
    for(i=1;i<o;i++){ b[i]=b[i-1]-a[i-1]+a[i+k-1]; if(b[i]<p){ p=b[i];l=i+1;}  }
    for(i=0;i<o;i++){ printf("%d\n",b[i]);}
    printf("%d\n",p);
    printf("%d\n",l);
    return 0;
}
