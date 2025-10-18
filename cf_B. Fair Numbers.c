#include<stdio.h>

int main()
{
    long long n,m,o,i,j,k,a[20],h[20],t;
    scanf("%lld",&t); while(t--){

    for(i=0;i<20;i++){ a[i]=h[i]=0; }
    scanf("%lld",&n);
    o=0;
    asd :
        n=n+o;
    m=n;
    for(i=0;i<20;i++){ a[i]=h[i]=0; }
    while(m>0){ a[m%10]=1; m=m/10; }
    k=0;
    for(i=1;i<10;i++){   if(a[i]!=0){ if(n%i!=0){  k=1; break ; } } }


    if(k==0){printf("%lld\n",n);}
    else{ o=1; goto asd; }
    }
    return 0;
}
