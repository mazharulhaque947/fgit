#include<stdio.h>

int main()
{   int a[100],b[100],n,i,j,k,l,p,o,x,y;
    scanf("%d %d %d %d",&x,&y,&p,&o);

    n=0;
    for(i=x;i>=p;i--)

    {


        for(j=y;j>=o;j--){

if(i>j){   a[n]=i; b[n]=j; n+=1;}


        }


    }
    printf("%d\n",n);
    for(i=n-1;i>=0;i--){
        printf("%d %d\n",a[i],b[i]);


    }

    return 0;
}
