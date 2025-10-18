#include<stdio.h>
int y(const void *a ,const void *b){ return (-*(int *)b+ *(int *)a);}
int main(){
int i,j,a[3],b,c,n;
scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
i=0;
j=0;
qsort(a,3,4,y);

while(i+a[j]<=n){i=i+a[j];j=j+1; if(n<i){j=j-1; break ;}if(j==3){break ;}}

printf("%d",j);
return 0;
}
