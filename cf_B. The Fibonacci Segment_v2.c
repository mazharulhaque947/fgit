#include<stdio.h>

int main()
{   int n,m,k,l,r,a[100],b[100],i;
     scanf("%d",&n);
     for(i=0;i<n;i++){ scanf("%d",&a[i]);  }
    if(n==1){ printf("1\n");}
    else if(n==2){ printf("2\n");  }
    else{

       r=0;
       k=2;
       for(i=0;i<n-2;i++){

        if(a[i]+a[i+1]==a[i+2]){ k++ ; }
         else {  b[r]=k; k=2; r++; }
         if( i==n-3){  b[r]=k; k=2; r++;   }

       }
       k=b[0];
       for(i=0;i<r;i++){ if(b[i]>k){ k=b[i]; } }

       printf("%d\n",k);

    }
    return 0;
}
