#include<stdio.h>
long long po(int a, int b){  long long u;  u=1; while(b>0){ u=u*a; b--;} return u ; }


int main()
{
    int n,k,y,t,l,p,i;
    long long a[1000],r,x;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %d %d",&x,&y,&k);
        n=0;
        for(i=0;r=(y*i),r<=(x+k);i++){ a[2*i]=i; a[2*i+1]=r;n=n+1;  printf("i==%d prod= %d\n",a[2*i],a[2*i+1]);  }

        for(i=0;i<k;i++)
        {
           x=x+1;
           printf("x=%lld y=%d i=%d \n",x,y,i);
         //  while(x%y==0){x=x/y;}
         while(x%y==0){  for(p=0;p<n;p++){

                printf(" check levelp= %d x=%lld y=%d i=%d \n",p,x,y,i);
         if(x==a[2*p+1]){  x=a[2*p];

         printf(" match  x==%d x new=%d\n",a[2*p+1],a[2*p]);

          } } }
         printf("\n");

        }

        printf("%lld\n",x);

    }

    return 0;
}

