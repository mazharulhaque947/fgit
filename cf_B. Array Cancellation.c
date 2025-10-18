#include<stdio.h>

int main()
{

    long long a[100],b[100],i,j,k,n,m,t,u,y,z,x,l,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        l=0;
        u=0;
        x=0;
         for(i=0;i<n;i++){  b[i]=0;}
        for(i=0;i<n;i++){
                scanf("%lld",&a[i]);
        if(i==0){b[0]=a[0];if(a[0]<0){u=1; } continue ;}
        x=0;if(a[i]<0){x=1; } if(u!=x){l++;u=x; }  b[l]=b[l]+a[i];

        }

     //   for(i=0;i<l+1;i++){  printf("%lld ",b[i]);}

        l++;
        s=0;
        x=l;
        if(b[l-1]>0) { s=s+b[l-1]; x--; }
        for(i=x-1; i>0; i-=2){ // printf("%lld\n",b[i]);
         u=b[i]+b[i-1];// printf("s==%lld u==%lld\n",s,u);

         if(u>=0){ s=s+u; } else{ if(i>=2) {b[i-2]=b[i-2] +u;}} }
 //printf("\n");
        printf("%lld\n",s);

    }



    return 0;
}
