#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,k,j,n,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        n= strlen(a);
        for(i=0;i<n-2;i++){ printf("%c",a[i]);}
        printf("i");
        printf("\n");



    }


    return 0;
}
