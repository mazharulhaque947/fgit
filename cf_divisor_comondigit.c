#include<stdio.h>

int main()
{
    long long n,i,j,k[10],c[10],b[10],s,r,l,q;
    scanf("%lld",&n);
    for(l=0;l<9;l++){ k[l]=0; c[l]=0;}
    l=n;

    while(l>0){ k[l%10]=1; l=l/10; }
    //for(l=0;l<9;l++){ printf("%lld  ",k[l]);}
    s=0;
    for(i=1;i<sqrt(n);i++)
{

  if(n%i==0){ // printf("%lld %lld \n",i,n/i);
        q=i;

   for(l=0;l<9;l++){ c[l]=0;} while(q>0){ c[q%10]=1;q=q/10  ;} r=0;  for(l=0;l<9;l++){ r+=k[l]*c[l]; } if(r>0){ s++;}


  q=n/i;   for(l=0;l<9;l++){ c[l]=0;;} while(q>0){ c[q%10]=1;q=q/10;} r=0;  for(l=0;l<9;l++){ r+=k[l]*c[l];    } if(r>0){ s++;}


   }



}
q=sqrt(n);
if(q*q==n){  for(l=0;l<9;l++){ c[l]=0;;} while(q>0){ c[q%10]=1;q=q/10;  } r=0;  for(l=0;l<9;l++){ r+=k[l]*c[l]; } if(r>0){ s++;} }

printf("%lld\n",s);
    return 0;
}
