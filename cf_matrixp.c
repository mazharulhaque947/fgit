
#include<stdio.h>

int main()
{
    int a[100000],b[100000],i,j,k,l,m,c,o,p,n,v[500][500],y[2][500],h,q,w;
    //scanf("%d",&n);
n=999;
scanf("%d %d",&o,&p);
for(i=0;i<o;i++){
  for(j=0;j<p;j++){  scanf("%d",&v[i][j]);}
}
    for(i=0;i<=n;i++){ a[i]=1;}
    a[0]=0;
    a[1]=0;
    //a[2]=0;
    for(i=2;i<n;i++){   if(a[i]!=0){ for(k=i+1; k<=n;k++){ if(a[k]!=0 && k%i==0){a[k]=0;} } }}
l=0;
for(i=n;i>=0;i--){ if(a[i]==1){l=i; break;} }
    for(i=0;i<=n;i++){ c=0; j=i; while(a[j]!=1){ c=c+1; j=j+1;if(j==n+1){break ;}} b[i]=c; }
   // for(i=0;i<=n;i++){ printf("%d %d %d\n",i,a[i],b[i]);}
     //printf("\n %d\n",l);
        w=0;
  // for(i=0;i<2;i++){ for(j=0;j<p;j++){y[i][j]=0;} }
for(i=0;i<o;i++){ for(j=0;j<p;j++){ y[0][i]=y[0][i]+b[v[i][j]];} }
h=y[0][0];
for(i=0;i<o;i++){ if(y[0][i]<h){h= y[0][i]; if(h==0){w=1; break ; }}}
if(w!=1){

for(i=0;i<p;i++){ for(j=0;j<o;j++){ y[1][i]=y[1][i]+b[v[j][i]];} }
 m=y[1][0];
   for(i=0;i<p;i++){ if(y[1][i]<m){m= y[1][i]; if(m==0){w=1; break ; }}}
   }
if(w==1){printf("0\n");}
else{ if(m<h){ m=m;}else{ m=h;} printf("%d\n",m);}
//for(i=0;i<o;i++){ for(j=0;j<p;j++){ printf("%d",v[i][j]);} printf("\n");}
//for(i=0;i<2;i++){ for(j=0;j<p;j++){printf("%d",y[i][j]);} printf("\n"); }

    return 0;
}
