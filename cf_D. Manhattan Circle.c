#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int t,i,j,k,l,m,n,u,v,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
         u=0;
        k=0;
        l=0;
        for(i=0;i<n;i++){ scanf("%s",a);



                v=0;
                 x=0;
         for(j=0;j<m;j++)

            { if(a[j]=='#')
                  {
                if(x==0){l=j;x++;}
                 v++;}
            }
         if(u<v){ u=v; k=i;y=l; }


          }



          printf("%d %d\n",k+1,y+(u/2 +1));

    }

    return 0;
}
