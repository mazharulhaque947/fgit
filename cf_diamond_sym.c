#include<stdio.h>

int main()
{
    int m,n,i,k,j,l,o;
    scanf("%d",&n);
n=n+1;
    for(i=0;i<n;i++){

        for(j=0;j<n-1-i;j++){ printf("  ");}
        for(j=0;j<=(2*i+1);j++){if(j<=(0+i)){printf("%d",j); if(j!=i){printf(" ");} }if(j>(i+1)){printf(" %d",(i+1)-(j-i));} }
        printf("\n");

    }
  for(i=0;i<n-1;i++){

        for(j=0;j<1+i;j++){ printf("  ");}
        for(j=0;j<(2*(n-2-i)+1);j++){if(j<(n-i-1)){printf("%d",j); if(j!=(n-i-2)){printf(" ");} }if(j>=(n-i-1)){printf(" %d",( (n-3-i)-(j-(n-1-i))  ) );}}
        printf("\n");

    }
    return 0;

}
