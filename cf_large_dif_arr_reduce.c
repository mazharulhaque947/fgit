#include<stdio.h>

int main(){
int n,t,k,l,i,j,m,a[100],b[100];
scanf("%d",&t);
while(t--){

    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]); b[i]=a[i]-i-1;}
    l=b[0];
     for(i=0;i<n;i++){ if(b[i]>l){ l=b[i];}}

     printf("%d\n",(l>0)?l:0);
}
return 0;
}
