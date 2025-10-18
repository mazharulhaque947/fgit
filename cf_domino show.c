#include<stdio.h>

#include<string.h>

int main(){

int i,j,k,n,p,l,h[100];
char a[100];
scanf("%d",&n);
scanf("%s",a);
l=0;
for(i=0;i<n;i++){ if(a[i]!='.'){ h[l]=i; l+=1;}  }
k=0;
p=1;
if(l>=1){
if(a[h[0]]=='R'){ p=0;}

for(i=0;i<l;i++){ if(i==0){k=h[0]*(1-p); } if(i==l-1) { k+=(n-h[i]-1)*((i+p)%2); break ;} if((i+p)%2==0){k+= ((h[i+1]-h[i]-1)%2); } else{ k+= (h[i+1]-h[i]-1); }  }

printf("%d\n",k);}
else{printf("%d\n",n); }
return 0;
}
