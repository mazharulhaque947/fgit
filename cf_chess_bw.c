#include<stdio.h>

#include<string.h>

int main()
{
    char a[100][100];
    int i,j,k,n,m;
    scanf("%d %d",&n,&m);

        for(i=0;i<n;i++){ scanf("%s",a[i]);}

     for(i=0;i<n;i++){ for(j=0;j<m;j++){ if(a[i][j]=='.'){ if((i+j)%2==0){a[i][j]='B';} else{a[i][j]='W';} } } }
for(i=0;i<n;i++){ for(j=0;j<m;j++){ printf("%c",a[i][j]); }printf("\n"); }
    return 0;
}
