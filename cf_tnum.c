#include<stdio.h>

int main(){
    int n,m,i,j;
    scanf("%d",&n);
    j=0;
    i=0;
    while(i<=n*2){  if(i*(i+1)==2*n){ j=1;    printf("YRS\n"); return 0;}  i++; }

  //  if(j==1){ printf("YRS\n");   }
    //else{
            printf("NO\n");
   // }


    return 0;
}
