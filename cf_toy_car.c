#include<stdio.h>

int main()
{
    int a[100][100],i,j,k,l,m,n,v[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){ for(j=0;j<n;j++){ scanf("%d",&a[i][j]); } }
    l=0;
     for(i=0;i<n;i++){ k=0; for(j=0;j<n;j++){if(a[j][i]==3||a[j][i]==2){ k=1; break ; } }if (k==0){v[l]=i+1; l++;}}

    printf("%d\n",l);
    for(i=0;i<l;i++){ printf("%d ",v[i]); }

    printf("\n");
    return 0;
}
