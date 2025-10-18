
#include<stdio.h>

int co(const void *a , const void *b)
{


    return (*(int *)a - *(int *)b);
}
int main(){
int i,l,j,k,n,o,p,a[100];

scanf("%d",&n);
scanf("%d",&l);


scanf("%d",&k);

for(i=0;i<n;i++){  a[i]=rand()%10; printf(" %d ",a[i]);}

qsort(a,n,sizeof(int),co);
printf("\n");
o=0;
for(i=0;i<k-l+1;i++){ o=o+a[i];  printf(" %d ",a[i]);}

printf("%d",o);
return 0;
}
