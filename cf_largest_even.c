#include<stdio.h>

int main()
{
    long long n,i,j,k,l,a[100],c;
    scanf("%lld",&n);
    l=0;
    k=0;
    a[n]=0;
    j=n;
    c=0;
    for(i=0;i<n;i++){  scanf("%lld",&a[i]); k=k+a[i];
    if(a[i]%2==1)

        {c++; if(l==0){ j=i; l++; } else if(a[i]<a[j] ){ j=i; } }
    }
    if(c%2==0){ j=n; }
    k=k-a[j];
    printf("%d\n",k);
    return 0;
}
