#include<stdio.h>

int main(){
int i,j,k,n,m,a[105],b[105],q[105],d[105];
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
j=0;
for(i=0;i<n;i++){ d[i]=-1;}
for(i=0;i<n;i++){ scanf("%d",&a[i]);}
for(i=0;i<n;i++){ scanf("%d",&b[i]);}
for(i=0;i<k;i++){ scanf("%d",&q[i]);}

    for(i=0;i<n;i++){ if(a[i]>d[b[i]] ){ d[b[i]]=a[i];} }
    for(i=0;i<k;i++){ if(a[q[i]-1]==d[b[q[i]-1]]){ j=j+0;} else  if( a[q[i]-1]<d[b[q[i]-1]]  ){ j=j+1;} }
    printf("%d\n",j);
return 0;
}
