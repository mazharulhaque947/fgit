#include<stdio.h>

int main()
{
    int a[12],i,j,k,l,n,m,z;
    scanf("%d",&z);
    for(i=0;i<12;i++){ scanf("%d",&a[i]); }
    for(i=0;i<11;i++){  for(j=i+1;j<12;j++){  if(a[i]<a[j]){ m=a[i]; a[i]=a[j]; a[j]=m;} }  }
    m=0;
    k=0;
    j=0;
     for(i=0;i<12;i++){ if(m>=z){ k=1; break;} m=m+a[i]; j++; if(m>=z){ k=1; break;}  }

if(k==1){ printf("%d\n",j);}
else{   printf("%d\n",-1); }
    return 0;
}
