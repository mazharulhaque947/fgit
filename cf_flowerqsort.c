#include<stdio.h>

int co(const void *a ,const void *b){

return (*(int *)a -*(int *)b);}

int main()
{
    int a[2000],i,n;

    unsigned int j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]); }
    //for(i=100000;i<200000;i++){ a[i]=1000000000; }//scanf("%d",&a[i]); }
    qsort(a,n,4,co);

  //  for(i=0;i<n;i++){ printf("%d ",a[i]);}
//printf("%d %d %d %d",a[0],a[1],a[2]);
k=1;
i=0;
while(a[i]==a[i+1]){

    k=k+1;
    i=i+1;
    if(i==n-1){ break ;}
}
i=n-1;
j=1;

while((a[i]==a[i-1])&&(1)){

    j=j+1;
    i=i-1;
    if(i==0) { break ;}
}
if(j>k){
    //j=k;
}
if(j>1){ j=j*k;}
printf("%d %u",a[n-1]-a[0],j);
    return 0;
}
