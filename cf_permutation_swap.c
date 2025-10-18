#include<stdio.h>

int main()
{   int t,n,i,j,k,a[100];
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        k=0;
        j=0;
        for(i=0;i<n;i++){ scanf("%d",&a[i]);j=(a[i]-1-i);if(j<0){ j*=-1;} if(j>1){k=1;} }
        if(k==0){ printf("YES\n");}
        else{  printf("NO\n"); }
    }

    return 0;
}
