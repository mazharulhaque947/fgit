#include<stdio.h>

int main(){
long long a,b,c,k,l,m,i,j,n,q[1000],s,u;

scanf("%lld %lld %lld",&a,&b,&c);
j=0;

for(i=0;i<1000000000;i++)
{
  s=0;
  m=i;
  while(m>0){

    s=s+m%10;
    m=m/10;

  }
 // printf("s= %d",s);
    u=1;
    k=a;
    while(k>0){
        u=s*u;
        k=k-1;
    }
    //u=pow(s,a);
    //printf("u= %d",u);
    if(i==b*u+c){
       q[j]=i;
       j=j+1;
    }

}
if(j==0){ printf("0\n");}
else{printf("%d\n",j);
for(i=0;i<j;i++){printf("%d \n",q[i]);}}

return 0;}
