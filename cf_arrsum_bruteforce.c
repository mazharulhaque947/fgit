#include<stdio.h>

int main()
{
    int a[50],b[50],i,j,k,l,m,n,t;
    scanf("%d",&t);

    while(t--){

          scanf("%d",&n);
          for(i=0;i<n;i++){ scanf("%d",&a[i]);}

          while(n>0)
            {


                for(i=0;i<n;i++){  b[i]=a[n-1-i]; }
                n=n-1;
                for(i=0;i<n;i++){ a[i]=b[i+1]-b[i]; }


            }





          printf("%d\n",a[0]);

          }


    return 0;
}
