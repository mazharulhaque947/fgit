#include<stdio.h>

int main()
{
    int n,m,i,k,l,t;
    scanf("%d",&n);
    while(n--){
    scanf("%d %d",&k,&l);
    m=l-k;
    if(m==0&&k==1){ printf("1\n");}
    else{  printf("%d\n",m); }
    }
    return 0;
}
