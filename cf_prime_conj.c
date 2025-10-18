#include<stdio.h>

int main()
{
    int a[100000],b[100000],i,j,k,l,m,c,o,p,n;
    scanf("%d %d",&p,&c);
n=2000;
    for(i=0;i<=n;i++){ a[i]=1;}
    a[0]=0;
    a[1]=0;
    //a[2]=0;
    for(i=2;i<n;i++){   if(a[i]!=0){ for(k=i+1; k<=n;k++){ if(a[k]!=0 && k%i==0){a[k]=0;} } }}
l=0;
for(i=0;i<=n;i++){ if(a[i]==1){b[l]=i;l=l+1;} }
   // for(i=0;i<=n;i++){ c=0; j=i; while(a[j]!=1){ c=c+1; j=j+1;if(j==n+1){break ;}} b[i]=c; }
   // for(i=0;i<=n;i++){ printf("%d %d %d\n",i,a[i],b[i]);}
   m=0;
   i=0;
   while(i<l)
   {
       o=0;
       o=b[i]+b[i+1]+1;
      // printf("%d\n",o);
       if(o>p){ break ;}
       if(a[o]==1){ m=m+1;}
       i=i+1;

   }
  // printf("%d",m);
   if(m>=c)
     {printf("YES");}
     else{printf("NO");  }
    return 0;
}
