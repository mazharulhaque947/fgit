
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,n,t,m,o,v;
    char a[8][10];
    scanf("%d",&t);
    while(t--){

        for(i=0;i<8;i++){


            scanf("%s",a[i]);
        }
o=1;

 for(i=0;i<8;i++){

           for(j=0;j<8;j++){printf("%c",a[i][j]);} printf("\n");}
           m=1;n=2;v=0;
        for(i=0;i<8;i++){

           for(j=0;j<8;j++){

            if(a[i][j]=='.'){}
            else{m=i; n=j; o=0; break;}

        } if(o==0){ break ;}}
        for(k=i;k<8;k++){  if(a[k][j]=='.'){break ;}else{v=v+1;}}

        printf("%d %d %d",i,j,v);
         for(k=i;k<8;k++)  {if(a[k][j]!='.'){printf("%c",a[k][j]);}} printf("\n");


    }



    return 0;
}
