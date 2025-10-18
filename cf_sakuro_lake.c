#include<stdio.h>

int main()
{
    int t,n,m,i,j,k,p,a[100][100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++){ for(j=0;j<n;j++){  scanf("%d",&a[i][j]); } }

        if(n==1){if(a[0][0]<0){ printf("%d\n",-1*a[0][0]);}else{ printf("0\n"); }}


    }


    return 0;
}
