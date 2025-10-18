#include<stdio.h>
int main()
{
    int n,m,k,l,o,p,i,j;
    char h;
    scanf("%d",&n);
    p=0;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&h);
        scanf("%d",&o);
        if(h=='P'){ p+=o; }
        else{  if(o>p){ printf("YES\n");}
                else{ printf("NO\n");  }
                p-=o;
                if(p<0){p=0;}

         }

    }


    return 0;
}
