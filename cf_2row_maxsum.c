#include<stdio.h>

int main(){
int n,t,a[100],i,j,k,l,o,p;
while(t--)
{
 scanf("%d",&n);

    for(i=0;i<n;i++){scanf("%d",&a[2*i]);}
    for(i=0;i<n;i++){scanf("%d",&a[2*i+1]);}
    l=a[0]+a[1]-3;
    k=0;
    j=10;
    o=0;
    p=0;
    for(i=0;i<n;i++){  if(a[2*i]>=a[2*i+1]){p=a[2*i];}else{p=a[2*i+1];} o=o+p; if(i==0){ j=0; l=a[0]+a[1]; k=abs(a[2*i]-a[2*i+1]); }


     else{ if(k>abs(a[2*i]-a[2*i+1])&&l==a[2*i]+a[2*i+1]){k=abs(a[2*i]-a[2*i+1]);j=i;} if(l<(a[2*i]+a[2*i+1])){l=a[2*i]+a[2*i+1]; k=abs(a[2*i]-a[2*i+1]);j=i;} }


     printf(" val %d  %d %d %d %d",l,k,o,p,j);

     }
     printf("%d",p);
if(a[2*j]<=a[2*j+1]){p=a[2*j];}else{p=a[2*j+1];}
 printf("\n %d \n",p);
o=o+p;
printf("%d\n",o);
}


return 0;
}
