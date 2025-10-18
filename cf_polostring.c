#include<stdio.h>
#include<string.h>

int main()
{
    int n,m,i,k,j,l,u;
    char r[3]="ab";
    char h[10001];
    for(i=0;i<10000;i++){h[i]=97+i%2;}
    scanf("%d %d",&n,&k);
    if(n<k||(n>1&&k==1)){ printf("-1\n");return 0;}
    u=0;
    if(k!=1){
        u=(n-k+2) /10000;
        for(i=0;i<u;i++){ printf("%s",h);  }

     for(i=0;i<(((n-k+2)-(u*10000))/2);i++){printf("%s",r); }

     if(((n-k+2)%2)==1){printf("a");}
    if(k>2){
        for(i=2;i<k;i++){printf("%c",'a'+i);}

    }

    }
    else{ printf("a\n");}

    printf("\n");

    return 0;
}
