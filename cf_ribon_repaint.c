#include<stdio.h>

int main()
{   int n,m,k,i,j,l,r,t;
scanf("%d",&t);
while(t--)
{


scanf("%d %d %d",&n,&m,&k);
l=0;
j=0;
if(n%m!=0){ j=n%m; j--; }
r=1;
if(m>1){  r=(n/m)*(m-1)+j;  }
if(r>k){ l=1;}
if(l==1){printf("YES\n"); }
 else{ printf("NO\n"); }
}
    return 0;
}
