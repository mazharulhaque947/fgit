#include<stdio.h>
#include<string.h>
#define  lo(n) for(i=0;i<n;i++)
int main()
{
    int i,j,k,l,n,m,s;
    char b[1005];
    scanf("%s",b);
    if(b[0]=='0'){  printf("0\n"); return 0;}
    n=strlen(b);
    if(n==1){printf("0\n"); return 0;}
    m=1;
    s=0;
    lo(n){ s=s+b[i]-'0';}
    j=0;
    while(s>9){j=0; while( s>0  ){ j=j+s%10; s=s/10;  } m=m+1;s=j;  }
    printf("%d\n",m);
    return 0;
}
