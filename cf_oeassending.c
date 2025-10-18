#include<stdio.h>

int main()
{
    int  m,k,i,j,l,n;
    scanf("%d",&n);
     scanf("%d",&k);
    if(k<=((n/2)+(n%2))){ k=k; j=(2*k)-1;  }
    else{ k=k-((n/2)+(n%2)); j=2*k; }

    printf("%d",j);
    return 0;
}
