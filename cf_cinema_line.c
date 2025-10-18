
#include<stdio.h>

int main()
{   int n,i,j,k,l,a[100];
 scanf("%d",&n);
 k=0;
 l=0;
 j=0;
 for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    if(a[i]==25){  k=k+1;}
    else if(a[i]==50){  if(k>=1){  k=k-1; l=l+1;} else{  j=1;

   //  break;

      } }

    else if(a[i]==100){  if(k>=1&&l>=1){  k=k-1; l=l-1;} else if(k>=3){k=k-3;} else{  j=1;

    // break;

      } }

 }
  if(j==0){printf("YES\n"); }
   else{printf("NO\n"); }

    return 0;
}
