#include<stdio.h>
long long fa(long long a){
long long r;
r=a*(a-1)/2;

return r;

}
int main()
{
    long long n,m,i,k,l,h;

    long long q,w;
    scanf("%lld %lld",&n,&m);
    q=fa(n+1-m);
    k=n%m;
    l=n/m;
    h=m-k;
    w=h*fa(l)+k*fa(l+1);
    printf("%lld %lld",w,q);
    return 0;
}
