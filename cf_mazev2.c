#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,k,j,n,m,h[4],r,s,u,t,z,w;
    char a[10][10];
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){ scanf("%s",a[i]); }
   // for(i=0;i<n;i++){for(j=0;j<m;j++){printf("%c",a[i][j]);}printf("\n");}
w=0;

z=0;
t=0;
     for(i=0;i<n;i++){

        for(j=0;j<m;j++)
        { if(t>=k){ break ;}
            if(a[i][j]=='.'){ t++;a[i][j]='X' ;  }


        }

        if(t>=k){ break ;}
     }


     for(i=0;i<n;i++){


        for(j=0;j<m;j++){

            printf("%c",a[i][j]);


        }
        printf("\n");
     }
    return 0;
}

