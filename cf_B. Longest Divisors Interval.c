#include<stdio.h>

int main()
{
    long long v,t,a[10000],n,i,j,k,l,b[10000],c[10000],y,x,z;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        k=0;
        l=0;
        v=sqrt(n);
        if(v*v==n){l=1;}
      //  printf("%dll \n",l);
        for(i=1;i<=sqrt(n);i++){ if(v=n%i,x=n/i,v==0){ a[k*2]=i; a[2*k+1]=x;
       // printf(" %d  %d \n",a[2*k],a[2*k+1]);

         k++; } }
        for(i=0;i<k;i++){ b[i]=a[2*i]; }
       // for(i=0;i<k-l;i++){  b[k+i]=a[(k-i-1-l)*2+1]; }
       // for(i=0;i<(2*k)-l;i++){ printf("bbb %d \n",b[i]); }
        v=0;
        y=0;
        z=1;
        for(i=1;x=k/*(2*k)-l*/,i<x;i++)

            {
                if(b[i]-b[i-1]==1){ z++;  }


                else{ // c[y]=z;
                         if(z>v){ v=z;}

                       z=1; y++;
                    }


                if(i==x-1){ // c[y]=z;
                               if(z>v){ v=z;}

                          y++;
                        }


           }
        printf("%lld\n",v);
    }


    return 0;
}
