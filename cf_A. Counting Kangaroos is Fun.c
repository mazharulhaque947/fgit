#include<stdio.h>

int main()
{
    int a[100],n,i,j,k,l,o,p,b[1001];

    scanf("%d",&n);
    k=0;
    o=0;
    for(i=0;i<1001;i++){ b[i]=0; }
    for(i=0;i<n;i++){  scanf("%d",&a[i]); if(a[k]>a[i]){ k=i; } o=o+a[i];  b[a[i]]=b[a[i]]+1; }
     p=0;
     l=0;
    for(i=0;i<1001;i++){  if(b[i]>p){p=b[i]; l=i; } }


    if(n==1){ printf("YES\n");   }else{
    if( (b[l]<=(n-b[l])+1)   ){ printf("YES\n");  }
    else{ printf("NO\n"); }

    }

    return 0;
}
