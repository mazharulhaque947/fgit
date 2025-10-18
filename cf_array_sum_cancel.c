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
        s=0;
         for(i=0;i<n;i++){  b[i]=0;}
        for(i=0;i<n;i++){
                scanf("%lld",&a[i]);
           s=s+a[i];

            if(s<0){  s=0;}
        if(i==0){b[0]=a[0];if(a[0]<0){u=1; } continue ;}
        x=0;if(a[i]<0){x=1; } if(u!=x){l++;u=x; }  b[l]=b[l]+a[i];

        }

        for(i=0;i<l+1;i++){  printf("%lld ",b[i]);}


        printf("%lld\n",s);

    }



    return 0;
}

