#include<stdio.h>

int main()
{ int i,j,k,l,p,o,m,n,c[100],t[100],v[100];
scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++){ scanf("%d %d",&c[i],&t[i]);}
    for(i=0;i<m;i++){ scanf("%d",&v[i]);}
    k=0;
    l=0;
    for(i=0;i<m;i++){ while(k+(c[l]*t[l])<v[i]){ k+=c[l]*t[l]; l+=1;}  printf("%d\n",l+1);}

    return 0;
}
