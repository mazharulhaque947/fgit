#include<stdio.h>

int main()
{
    int i,j,k,m,n,t;
    scanf("%d",&t);
    char a[101],b[101];
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",a);
        scanf("%s",b);
        k=0;
        for(i=0;i<n;i++){
            if((a[i]=='R'&&b[i]!='R')||(a[i]!='R'&&b[i]=='R')){k=1; break; }

        }
        if(k==0){printf("YES\n");}
        else{ printf("NO\n"); }

    }


    return 0;
}
