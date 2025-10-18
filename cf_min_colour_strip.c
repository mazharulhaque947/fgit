#include<stdio.h>
#include<string.h>

int main(){
int n,m,k,i,j,p,l,b[100][2],r[100],e,o;
char a[100];
//scanf("%d %d",&n,&k);
scanf("%s",a);
p=strlen(a);
l=0;
j=a[0];
m=1;
for(i=1;i<p;i++){ if(a[i]==j){ m+=1;}  if(a[i]!=j){b[l][0]=j; j=a[i];b[l][1]=m; m=1;l+=1; }  if(i==p-1){ b[l][0]=j; b[l][1]=m;l+=1; } }
e=o=m=0;
for(i=0;i<l;i++){m=m+(b[i][1]/2);if(b[i][1]%2==0){r[i]=0;e+=1; }else{ r[i]=1;o+=1;}  printf("%d %d \n",b[i][0],b[i][1]);}

printf("  %d %d ",e,o);
return 0;
}
