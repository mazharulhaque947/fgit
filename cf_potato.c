#include<stdio.h>

int main()
{
    int y,x,n,k,l,u;
    scanf("%d %d %d",&y,&k,&n);
    l=0;
u=0;
    while(1){
        if(u%k==0 && u-y>=1){l=1; printf("%d ",u-y); }
        u++;
        if(n==u){ break ;}

    }
    //x=n-y;
    if(l==0){ printf("%d\n",-1);}
   // else{printf("%d\n",-1);   }
    return 0;
}
