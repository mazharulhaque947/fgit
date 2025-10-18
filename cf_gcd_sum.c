#include<stdio.h>

int main()
{
    int n,m,i,k,l,j;
    scanf("%d",&j);
    while(j--){
    scanf("%d",&n);
    k=0;
    for(i=3;i<1+n/2;i++){

           // printf(" level %d %d \n",(n-i),(i-1));
    if((n-i)%(i-1)!=0)


        {// printf("ifff\n");

         k=0; for(l=2;l<i;l++){
             // printf(" forr level k=%d i-1=%d n-1=%d l=%d \n",k,(n-i),(i-1),l);

              if((i-1)%l==0&&(n-i)%l==0){ k=1; break;}  }
    if( k==0){// printf("final break \n");

     k=i;break; } } }

   //printf("%d\n",k);
    printf("%d %d 1\n",n-k,k-1);
    }
    return 0;
}
