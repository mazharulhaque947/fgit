#include<stdio.h>

int main()
{   int n,m,j,i,k,l,o,p,t,a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        m=n/k;
         m=m+1;
        l=1;
        for(i=0;i<n;i++)
        {
            if(0){a[i]=0;}
            else if((i+1)%k==0){a[i]=l;l++;}
            else {  a[i]=m; m++;}

        }
        for(i=0;i<n;i++){printf("%d ",a[i]);}
        printf("\n");


    }

    return 0;
}
