
#include<stdio.h>

int main()
{
    char a[201];
    int i,j,k,l,n;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]=='.'){printf("0");}
        else{ if(a[i+1]=='-'){printf("2");} else{ printf("1");} i++; }
    }

    return 0;
}
