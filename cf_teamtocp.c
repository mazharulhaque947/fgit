#include<stdio.h>
int co(const void *a, const void *b){
return (*(int*)a-*(int*)b);
}
int main()
{
    int i,j,k,n,m,a[2003];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}
    qsort(a,n,sizeof(int),co);
    m=0;
   // printf("%d  %d",a[0],a[n-1]);
    for(i=0;i<n;i+=3){  if(5<=(k+a[i])){ m++;} }
    printf("%d\n",m);
    return 0;
}
