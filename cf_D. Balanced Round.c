#include<bits/stdc++.h>
using namespace std;

#define foo(n) for(i=0;i<n;i++)
int co(const void *a,const void *b   )
{
    return ( *(int *)a-*(int *)b );
}
int main()
{


int t,i,j,k,n,m,a[100],u,l;
scanf("%d",&t);

while(t--)
{

     scanf("%d",&n);
      scanf("%d",&k);
      foo(n){ scanf("%d",&a[i]); }
    qsort(a,n,sizeof(int),co);
  // foo(n-1){ l=i; for(j=i+1;j<n;j++){ if(a[l]>a[j]){  l=j;}    }  // a[i]=a[i]^a[l] ;a[l]=a[i]^a[l]; a[i]=a[l]^a[i];m=a[i];a[i]=a[l];a[l]=m;}
    m=1;
    u=1;
    for(i=1;i<n;i++){
        if(a[i]-a[i-1]<=k){ u++; }
        else{  if(u>m){ m=u;} u=1; }
        if(i==n-1){ if(u>m){ m=u;} }

    }
printf("%d\n",n-m);
}

    return 0;
}
