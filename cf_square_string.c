#include<stdio.h>

int main()
{
    int i,j,k,l,n,m,t;
    char a[200];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        n=0;
        for(i=0;a[i]!='\0';i++){ n++; }

        if(n%2==1){  printf("NO\n"); }
        else {


            m=n/2;
            k=0;
            for(i=0;i<m;i++){ if(a[i]!=a[i+m]){ k=1; break ; } }
            if(k==1){  printf("NO\n"); }
           else{ printf("YES\n");  }
        }

    }

    return 0;
}
