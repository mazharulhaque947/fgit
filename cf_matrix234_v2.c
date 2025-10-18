#include<stdio.h>

int main(){

int i,j,k,l,m,n,h,a[1000],b[1000],c[1000],t;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
j=0;

if(n>4){
for(i=1;i<=n;i=i+2){a[j]=i; j=j+1;}
l=0;
k=0;
for(i=(n-(n%2));i>1;i=i-2){if(l==2-(n%2)){a[j]=i;}else{b[k]=i; k=k+1;}l=l+1;}
for(i=0;i<(n/2)-1;i++){   a[j+i+1]=b[i];}}

if(n<=3){printf("-1");}
if(n==4){printf("3 1 4 2");}
else if(n>4){
for(i=0;i<n;i++){ printf("%d ",a[i]);}}

printf("\n");
}
return 0;}
