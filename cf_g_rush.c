#include<stdio.h>
int h[100];
int k[100];
int div( int n)
{
    int v,m,b;
    if(n%3==0){
    if(h[n-1]!=0){ k[n-1]=1;printf("found n=%d value=%d \n",n,h[n-1]); v=h[n-1];return v; }
    else{ h[n-1]=(n/3)*2;k[n-1]=1;k[(n/3)*2]=1;k[(n/3)]=1;
    printf("calculated n=%d  valh=%d \n",h[n-1]);
    if(h[n-1]%3==0){
    div(h[n-1]);
    if(h[n-1]%2==0){
    div(h[n-1]/2);}
    }
    v=h[n-1];
    return v;
     }
    }
    else{ return 0; }

}
int main()
{
    int i,t,n,m;
    scanf("%d",&t);
    for(i=0;i<100;i++){ h[i]=0; }

   // div(100);
    for(i=100;i>0;i--){  printf("                 i=%d value=  %d\n",i,div(i)); }
     for(i=100;i>0;i--){  printf("                 i=%d valuehhh=  %d\n",i,h[i]); }
    while(t--){

    scanf("%d",&n);
    scanf("%d",&m);
    if(m<n){  if(k[m]!=0){  printf("YES\n");} else{ printf("NO\n");} }

    }
    return 0;
}
