#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x[4],y[4],i,k,m,n,l;
   scanf("%d %d %d %d",&x[0],&y[0],&x[1],&y[1]);

   if(x[0]==x[1])
   {

       printf("%d %d %d %d\n",x[0]+(y[1]-y[0]),y[0],x[0]+(y[1]-y[0]),y[1]);

   }

    else if( y[0]==y[1])
    {
         printf("%d %d %d %d\n",x[0],y[0]+(x[1]-x[0]),x[1],y[0]+(x[1]-x[0]));

    }
    else if(abs(x[1]-x[0] )==abs(y[1]-y[0]))
    {


          printf("%d %d %d %d\n",x[1],y[0],x[0],y[1]);

    }
    else { printf("-1\n");}
    return 0;
}
