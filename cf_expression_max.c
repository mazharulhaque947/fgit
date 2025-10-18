#include<stdio.h>

int main()
{
    int i,j,n,m,a[3];
    //scanf("%d",&n);
    for(i=0;i<3;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<3;i++){  for(j=i;j<3;j++){ if(a[i]<a[j]){  m=a[i]; a[i]=a[j]; a[j]=m; } }  }

//printf(" %d %d %d ",a[0],a[1],a[2]);
if(a[0]==1){ printf("%d\n",3); }

else if(a[2]==1){  printf("%d\n",(a[0]*(a[1]+1)));}
else{   printf("%d\n",(a[2]*(a[1]*a[0])));  }
    return 0;
}
