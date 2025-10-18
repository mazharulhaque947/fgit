#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,t,a[200],h;
char b[12];
scanf("%d",&t);
while(t--){
   for(i=0;i<200;i++){a[i]=0;}
  scanf("%d",&n);
  scanf("%s",b);
  for(i=0;i<n;i++){a[b[i]]=a[b[i]]+1;}
  m=a[0];
j=0;
  for(i=0;i<200;i++){if(a[i]>m){m=a[i];j=i;}}


  k=m;
  l=j;
  for(i=0;i<200;i++){if(a[i]<k&&a[i]!=0){k=a[i];l=i;}}
  //printf("  %d %d %d %d ",m,j,k,l);
  if(m==k){
    h=b[0];
    for(i=0;i<n;i++){if(b[i]!=h){b[i]=h; break ;}}

  }
  else{
  for(i=0;i<n;i++){if(b[i]==l){b[i]=j; break ;}}}
   printf("%s\n",b);
}
return 0;}
