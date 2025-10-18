#include<stdio.h>
long long pri(long long h ){
long long p,l,i,j;
if(h<=1){ p=0; return p;}
else{
    p=1;
    for(i=2;i<=sqrt(h);i++){ if(h%i==0){ p=0; break ; } }

    return p;
}
}
int main()
{
       long long n,i,j,k,l,m,a[100],b[100];
       scanf("%lld",&n);
     for(i=0;i<n;i++){ scanf("%lld",&b[i]); }
    // for( i=0;i<100;i++){ a[i]=0;}
     a[0]=1;
     a[1]=0;
   //  for( i=1;i<10+1;i++){ for(j=i+1; j<100 ;j++){ if(a[j]==0) { if( (j+1)%(i+1)==0){ a[j]=1; } } } }
  //  for( i=0;i<100;i++){ printf("%lld  %lld\n",a[i] ,i);}

    for(i=0;i<n;i++){
        l=sqrt(b[i]);
        k=1;
        if(b[i]==l*l){ k=0;}

        if(k==0&& pri(l)==1){ printf("YES\n");}
        else{ printf("NO\n"); }

    }

    return 0;
}
