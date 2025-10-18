#include<stdio.h>

int main()
{
    int t,a,c,b,d,m,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==c&&b==d){  m=b-a+0; }
        else if(b<c){  m=1; }
            else if((a<c&&d<b)){ m= d-c+2;}
            else if(c<a&&b<d){ m=b-a+2; }
            else if(b==c){ m=2; }
            else if(a<c&&c<b&&b<d ){ m=b-c+1; }
            else if(a==c&&b<d ){ m=b-c+1; }
            else if(a==c&&b>d ){ m=d-c+1; }

            else if(c<a&&d==b ){ m=d-a+1; }
            else if(c>a&&d==b ){ m=d-c+1; }


           // else {m=c-b+1  ; }
        printf("%d\n",m);
    }


    return 0;
}
