#include<stdio.h>

int main(){

int n,a[100],k,l,i;
scanf("%d",&n);

for(i=0;i<n;i++){ scanf("%d",&a[i]);  if(a[i]==100){ k++;} else {l++;} }
if(k==0&&l%2==0){ printf("YES\n");}
else if(k%2==0){ printf("YES\n");}

else{ printf("NO\n");  }
return 0;}
