#include<stdio.h>

int main()
{  int x,y,a[2],b[2],f,g;
    scanf("%d %d",&x,&y);
    f=x;
    if(f<0){ f*=-1;}
    g=y;
    if(g<0){ g*=-1;}
    f=f+g;

    if(x>0){
        if(y>0){


            printf("%d %d %d %d\n",0,f,f,0);
        }
        else{

             printf("%d %d %d %d\n",0,-1*f,f,0);

        }

    }
   else{
        if(y>0){

             printf("%d %d %d %d\n",-1*f,0,0,f);

        }
        else{


             printf("%d %d %d %d\n",-1*f,0,0,-1*f);
        }

    }


    return 0;
}
