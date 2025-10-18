
#include<stdio.h>

int main()
{
    int n,m,i,j,k,l;
    scanf("%d %d",&n,&m);
    if(n==1){ printf("%d\n",m);}
    else{

        if((m-1)>=(n-m)){  printf("%d\n",m-1); }
        else  if((m-1)<(n-m)){  printf("%d\n",m+1); }

    }

    return 0;
}
