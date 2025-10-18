#include<string.h>

int main(){

long long n,a,i,j,l,d;
scanf("%lld",&n);
long long x[1000];
for(i=0;i<1000;i++){ x[i]=0;}
for(i=0;i<n;i++){ scanf("%lld",&a);


if(x[a]==0){

d=0;
if(sqrt(a)*sqrt(a)==a && a!=1){
j=0;
for(l=2;l<sqrt(a);l++){

   if(a%l==0){  j=5; break ;}

}

 if(j==0){printf("YES\n"); d=1;  x[a]=4;} }



 if(d==0){ printf("NO\n"); x[a]=5;}
}

else if(x[a]==4){printf("mmYES\n");}
else if(x[a]==5){  printf("mmNO\n");   }
}



return 0;
}
