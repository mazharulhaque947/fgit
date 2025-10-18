#include<stdio.h>
int co(const void *a , const void *b){  return ( *(int*)a-*(int*)b  ); }
int main(){
int m,i,j,s,n,k,l,o,a[100],b,d,p,q,r,y,z,x;
scanf("%d",&n);
scanf("%d",&k);
o=0;
p=0;
z=0;
for(i=0;i<n;i++){  scanf("%d",&a[i]);if(a[i]<0){ if(p==0){ b=a[i];p++;}  if(b<a[i]){ b=a[i]; }  o++; }
if(a[i]>=0){   if(z==0){ y=a[i];z++; } if(a[i]<y){ y=a[i]; } }}
qsort(a,n,sizeof(int),co);
b=b*-1;
if(b>y){ b=y; }
x=k;
if(o>=k){ if( ((o-k)%k)%2==1 ){ b=b; }else{ b=0;} }
s=0;

for(i=0;i<n;i++){ if(a[i]<0&&x>0){ s=s-a[i] ; x--; } else{ s=s+a[i];}  }
s=s-b;



printf("%d",s);




return 0;
}
