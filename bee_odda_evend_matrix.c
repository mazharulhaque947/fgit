#include<stdio.h>

int main()
{
    int a[100],e[100],o[100],i,j,k,l,n,h;

    scanf("%d",&n);
    l=0;
    k=0;

    for(i=0;i<n;i++){  scanf("%d",&a[i]); if(a[i]%2==0){  e[k]=i ;k=k+1; } else{  o[l]=i; l=l+1; } }
    for(i=0;i<k;i++){  for(j=i;j<k;j++){   if(a[e[i]]<a[e[j]]){ h=a[e[i]] ;a[e[i]]=a[e[j]]; a[e[j]]=h; }  }  }

    for(i=0;i<l;i++){  for(j=i;j<l;j++){   if(a[o[i]]>a[o[j]]){ h=a[o[i]] ;a[o[i]]=a[o[j]]; a[o[j]]=h; }  }  }
     for(i=0;i<n;i++){  printf("%d ",a[i]); }

    return 0;
}
