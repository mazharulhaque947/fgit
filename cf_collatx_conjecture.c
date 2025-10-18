#include<stdio.h>

int main()
{
    int n,k,x,y,t,l,p,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&k);
        for(i=0;i<k;i++)
        {
           x=x+1;
           while(x%y==0)
           {
               x=x/y;
           }



        }

        printf("%d\n",x);

    }

    return 0;
}
