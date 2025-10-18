#include<stdio.h>

#include<string.h>

int main()
{
    int i,j,n,m;
    char a[100],b[100],c[100];
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a);
    for(i=0;i<n;i++){ if(a[i]==b[i]){ c[i]='0' ;} else{ c[i]='1';}  }
     for(i=0;i<n;i++){ printf("%c",c[i]);}

    return 0;
}
