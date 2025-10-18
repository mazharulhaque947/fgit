#include<stdio.h>

int main()
{
    int a,b,c,x[10],y[10],z[10],o,p,u,i,j,k,l,h;
    scanf("%d %d",&a,&b);
    c=a+b;
    l=0;
    o=a;
    while(o>0){ k=o%10;  if(k==0){ o=o/10; continue ; } x[l]=k; l++;  o=o/10; }
  //  printf("l==%d ",l);
    o=0;
    while(l--){ //printf("%d  ll",l);

     o=o*10+(x[l]); }

   // printf("%d",o);
     h=o;
    l=0;
    o=b;
    while(o>0){ k=o%10;  if(k==0){ o=o/10; continue ; } x[l]=k; l++;  o=o/10; }
   // printf("l==%d ",l);
    p=0;
    while(l--){ //printf("%d  ll",l);

    p=p*10+(x[l]); }

   // printf("%d",p);

    l=0;
    o=c;
    while(o>0){ k=o%10;  if(k==0){ o=o/10; continue ; } x[l]=k; l++;  o=o/10; }
   // printf("l==%d ",l);
    j=0;
    while(l--){// printf("%d  ll",l);

     j=j*10+(x[l]); }

   // printf("%d",j);
    if(h+p==j){ printf("YES\n"); }
    else{     printf("NO\n");           }
    return 0;
}
