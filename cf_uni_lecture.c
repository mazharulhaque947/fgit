#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n,m,r[1000],l[1000];
    scanf("%d %d",&n,&m);
    char a[m][2][11],g[n][11];
    for(i=0;i<m;i++){

        scanf("%s",a[i][0]);
        scanf("%s",a[i][1]);
        r[i]=0;
        if(strlen(a[i][1])<strlen(a[i][0])){r[i]=1;}
    }
    for(i=0;i<n;i++){ scanf("%s",g[i]);  for(j=0;j<m;j++){ if(strcmp(g[i],a[j][0] )==0){l[i]=j; break ;} } }
    for(i=0;i<n;i++){ printf("%s ",a[l[i]][r[l[i]]]);}
    printf("\n");
    return 0;
}
