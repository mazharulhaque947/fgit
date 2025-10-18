#include<stdio.h>

int main()
{   int n,m,i,j,k,a[100],u;
      scanf("%d",&k);
    scanf("%d",&n);
  //  if(n==1){  printf("%d\n",1); return 0;}

    j=0;
    a[0]=0;
    a[1]=0;
    for(i=1;i<=sqrt(n);i++){ if(n%i==0){ j=n/i; if(j<=k){ if(i==j){a[1]++;} else{a[0]++;} } } }
    // if(j==k){ printf("%d\n",a[0]); }
   //else{

        printf("%d\n",2*a[0]+a[1]);
  // }


    return 0;
}
