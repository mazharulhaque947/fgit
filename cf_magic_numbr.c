#include<stdio.h>

int main(){
int a,i,j,k,l,o,p,n;
scanf("%d",&n);
o=0;
while(n>0)
{p=n%10;
l=n/10;
l=l%10;
a=n/100;
a=a%10;
 if(p==1||p==4){

    if(p==1){ n=n/10;}
    else if(l==1&&p==4){ n=n/100;}
    else if(p==4&&l==4&&a==1){ n=n/1000;}
    else{ o=1; break ;}
 }
  else{ o=1; break;}


}
if(o==0){ printf("YES\n");}
else{ printf("NO\n");}
return 0;}
