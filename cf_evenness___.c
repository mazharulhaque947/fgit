#include<stdio.h>

int main(){

int a[100],n,t,i,j,k[2],y;
scanf("%d",&n);
k[0]=0;
k[1]=0;
for(i=0;i<n;i++){scanf("%d",&a[i]); k[a[i]%2]=k[a[i]%2]+1;}
if(k[0]==1){j=0;}
else{j=1;}

for(i=0;i<n;i++){if(a[i]%2==j){y=i+1; break ;}}
printf("%d",y);
return 0;}
