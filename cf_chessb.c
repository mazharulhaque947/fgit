#include<stdio.h>

#include<string.h>

int main()
{
    char a[8][9];
    int i,j,k,n,m;
    for(i=0;i<8;i++){  scanf("%s",a[i]);}
    m=0;
    k=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
//printf("%c",a[i][j]);

if(a[i][j]!=a[i][((j+1)%8)]){}
else{ m=1;}
           /*     if((i+j+k)%2==0){
            //printf("W");
            if(a[i][j]=='B'){m=1;}
            }
            else{//printf("B");
            if(a[i][j]=='W'){m=1;}

            */



           // if(a[i][j]=='B'&&((i+j+k)%2==0)){ m=1; break ;}
            //if(a[i][j]=='W'&&((i+j+k)%2==1)){ m=1; break ;}
        }
      // printf("\n");


    }
    if(m==1){ printf("NO\n");}
    else{ printf("YES\n"); }
    return 0;
}
