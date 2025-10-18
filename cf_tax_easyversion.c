#include<stdio.h>

int main(){

int a[100],i,j,k,b[10],n,t,m;
scanf("%d",&t);
while(t--){

    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}

    for(i=0;i<m;i++){ scanf("%d",&b[i]);}
    k=0;

    for(i=0;i<n-1;i++){  if(a[i+1]>=a[i]){  } else if(b[0]-a[i]<=a[i+1]){a[i]=b[0]-a[i]; }  else{k=1; break;} }

    if(k==0){ printf("YES\n");}
    else{  printf("NO\n");}
}
return 0;
}
