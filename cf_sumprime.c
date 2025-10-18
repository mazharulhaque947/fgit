#include<stdio.h>

int main()
{
    int i,j,k,n,a,b;
    scanf("%d",&n);
    if(n-2<=1){ printf("-1\n");}
else{k=0;
    for(i=2;i<=sqrt(n-2);i++){
        if((n-2)!=i){

            if((n-2)%i==0){ k=1; break ;}
        }

    }
    if(k==0){ printf("%d %d\n",n-2,2);}
    else{printf("-1\n");}}
    return 0;
}
