#include<stdio.h>
#include<string.h>

int main()
{
int i,j,k,l,m,n,b[200],c[200],d[200],y,x;
char a[201];
scanf("%s",a);
n=strlen(a);

m=0;
x=0;
l=0;
k=0;
if(a[0]=='.'){   m=1; }
   for(i=0;i<n;i++) {

        x=0; if(a[i]=='.'){ x=1;}
        if(x==m){ if(m==0){ k++;} else{ d[l]=0;l++;}}
           else{ m=x; if(m==0){ k=1; }
                   else{ d[l]=k; k=1; l=l+1; d[l]=0; l=l+1;   }}
               if(i==n-1&&m==0){ d[l]=k; l++;}
          }
  // printf("%d\n",l);
  for(i=0;i<l;i++ ) { printf("%d",d[i]);}

return 0;
}
