#include<stdio.h>
#include<string.h>
int fa(int n){

int y,k;
k=n;
y=1;
while(k>1){

  y=y*k;
  k=k-1;
}

return y;
}
int po(int n){
int y,k;

y=1;
k=n;
while(k>0){ y=y*2;k=k-1; }

return y;
}
int main(){
double f;
int i,j,k,l,m,n,o,p;
long long h[6];
char a[100],b[100];

scanf("%s",a);
scanf("%s",b);
p=o=m=n=l=0;
for(i=0;a[i]!='\0';i++){

    if(a[i]=='+'){p=p+1;  }
    else{ o=o+1;}

}
for(i=0;b[i]!='\0';i++){


    if(b[i]=='+'){m=m+1;  }
    else if(b[i]=='-'){ n=n+1;}
     else{ l=l+1;}

}
p=p-m;
o=o-n;
if(p<0){ p=p*-1;}
if(o<0){o=o*-1;}
f=5;

if(p+o<=l){h[0]=fa(l); h[1]=fa(l-p); h[3]=po(l); h[2]=fa(p); h[4]=h[1]*h[2]; h[5]=h[4]*h[3]; f=h[0]/(double)h[5]; }
else{ f=0;}
printf("%lld %lld %lld %lld %lld %lld %lf",h[0],h[1],h[2],h[3],h[4],h[5],f);
printf("%.9lf",f);
return 0;
}
