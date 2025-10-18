#include<stdio.h>

int main()
{
    inr a[100],b[100],c[100],d[100];i,j,k,m,n,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++){ d[i]=0; }
         for(i=0;i<n;i++){ scanf("%d",&a[i]);d[a[i]-1]+=1;}
      k=d[0];
      for(i=0;i<n;i++){ if(d[i]>k){ k=d[i];}}


    }

    return 0;
}
