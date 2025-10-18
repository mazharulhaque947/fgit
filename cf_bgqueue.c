#include<stdio.h>
#include<string.h>

int main()
{
    int b,i,g,j,k,l,h;
    scanf("%d %d",&b,&g);
    if(b>=g){  k=g ;l=0;h=b-g;}
    else{  k=b; l=1; h=g-b;}
   for(i=0;i<k;i++){  if((l)%2==0){printf("%c%c",'B','G');} else{ printf("%c%c",'G','B'); } }
   for(i=0;i<h;i++){ if(l==0) {printf("%c",'B');} else{  printf("%c",'G'); } }
    return 0;
}
