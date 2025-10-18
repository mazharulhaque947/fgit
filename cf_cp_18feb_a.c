
#include<stdio.h>

int main()
{
int t,a[100][100],i,j,k,l,m,n,b[700*700+1],c[700*700+1],s;

scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
       scanf("%d",&m);
      for(i=0;i<n;i++){ for(j=0;i<m;j++){scanf("%d",&a[i][j]);} }
//for(i=0;i<n;i++){ b[i]=0; }
for(i=0;i<(700*700)+1;i++){ b[i]=0;c[i]=0;}
l=0;
if(n>1&&m>1){
for(i=0;i<n-1;i++){ for(j=0;i<m-1;j++){ c[a[i][j]]=1;  if(a[i][j]==a[i][j+1]||a[i][j]==a[i+1][j]){ b[a[i][j]=1; l=1; } }  }
else if(n==1){  for(j=0;j<n-1;j++){ c[(a[0][j]]=1; if(a[0][j]==a[0][j+1]){ b[a[0][j]=1; l=1; } }}
else if(m==1) {   for(j=0;j<n-1;j++){ c[(a[j][0]]=1; if(a[j][0]==a[j+1][0]){ b[a[j][0]=1;  l=1;} } }
else if(n==1&&m==1){ c[(a[0][0]]=1; l=0; }

s=0;
for(i=0;i<(700*700+1);i++){ k=1; if(b[i]==1){ k=2} s=s+c[i]*( k ); }
s=s-2*l;
printf("%d\n",s);
  }



    return 0;
}
