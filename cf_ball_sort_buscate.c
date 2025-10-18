#include<stdio.h>

int main(){
   int n,m,a[100000][2],i,j,k,l;
scanf("%d %d",&n,&m);
   k=(m+m%2)/2;
   a[0][0]=k;
   a[0][1]=k+1;
   k=k-(1-m%2);

   a[m-1][0]=m;

   l=0;
   if(m%2==1){
   for(i=0;i<k;i++){
    a[2*i+1][0]=a[0][0]-i-1;
    a[2*i+2][0]=a[0][0]+i+1;

   // l++;
   }
    for(i=0;i<n;i++){ printf("%d\n",a[i%m][0]);}
   }

   else{

   for(i=0;i<k;i++)
{
     a[i+1][0]=a[0][0]-1-i;
     a[i+1][1]=a[0][1]+1+i;
}
 for(i=0;i<n;i++){  printf("%d\n",a[(i%m)/2][i%2]); }
   }

  return 0;
}
