
#include<stdio.h>

int main()
{
    int t,i,j,n,m,a[200];
    scanf("%d",&t);
    for(i=0;i<t;i++){ scanf("%d",&a[i]);}
   for(j=0;j<t;j++){ m=0; for(i=3;i<180;i++){ if( (180-a[j])*i==360 ){ m=1; break ;}} if(m==1){printf("YES\n");} else{ printf("NO\n");} }
    return 0;
}
