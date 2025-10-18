#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,k,l,n,m;
    char a[3][4];
    scanf("%d",&t);
    while(t--){
    for(i=0;i<3;i++){for(j=0;j<3;j++){ scanf(" %c",&a[i][j]); if(a[i][j]=='?'){n=i; } } }
    m='A'+'B'+'c';
    k=0;
   // printf("%d  %d   ",m,k);
    for(i=0;i<3;i++){if(a[n][i]!='?'){ k+=a[n][i];} }
   // printf("%d  %d   ",m,k);
    printf("%c\n",m-k-32);
    }
    return 0;
}
