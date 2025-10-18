#include<stdio.h>

int main()
{
    int n,m,k,l,a[200][200],i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){  scanf("%d",&a[i][0]);for(j=1;j<=a[i][0];j++){scanf("%d",&a[i][j]); } j=0;  }
for(i=0;i<n;i++){ for(j=0;j<=a[i][0];j++){ printf("%d ",a[i][j]);}printf("\n") ;}

    return 0;
}
