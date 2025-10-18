#include<stdio.h>

int main()
{
    int n,k,i,j,l,m,a[100],r,w,g,o;
    scanf("%d",&n);
    m=0;
    for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]==1){ m++; } }
    r=0;
    k=l=0;
    for(i=0;i<n;i++){  for(o=n;o>=i;o--) {k=l=0; for(j=i;j<o;j++){ if(a[j]==1){l++;}else{k++;} }if(w=(m-l+k), r< w){r=w;} } }
    printf("%d\n",r);
    return 0;
}
