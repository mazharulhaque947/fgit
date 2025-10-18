#include<stdio.h>

int main
()
{
    int r[210],a,b,c,i,j,k,l,n,m,s;
    long long q;
    for(i=0;i<210;i++)
    {
        s=0;
        c=sqrt(i+1);
        if(c*c==i+1){c=1;}else{ c=0;}
        for(j=1;j<=sqrt(i+1);j++){ if((i+1)%j==0){ s+=2; } }
      r[i]=s-c;
     // printf("%d  \n",r[i]);

    }
    scanf("%d %d %d",&a,&b,&c);
    q=0;
    for(i=1;i<=a;i++){

      for(j=1;j<=b;j++)
      {
          for(l=1;l<=c;l++){ q=q+r[i*j*l-1]; }


      }

    }

 printf("%lld  \n",q);

    return 0;
}
