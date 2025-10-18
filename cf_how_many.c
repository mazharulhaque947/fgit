#include<stdio.h>

int main()
{
    int a[10000],i,j,k,m;
    m=0;
   // k=sqrt()
   printf("%d ",m);
   for(i=0;i<10000;i++){ a[i]=0;  printf(" %d \n",i);}
   for(i=11;i<100;i++){  printf(" task %d \n",i); for(j=i+1;j<10000;j++){ if(a[j]==0){ if(j%i==0){a[j]=1;} } } printf(" end %d \n",i);  }
    for(i=12;i<10000;i++){ if(a[i]==0){ m+=1; } }
    printf("%d ",m);
    return 0;
}
