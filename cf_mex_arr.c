#include<stdio.h>
int main(){


int n ,i,k,j,l,o,p,a[3002];

scanf("%d",&n);
for(i=0;i<=n;i++){


   a[i]=0;
}
k=n;

for(i=0;i<n;i++){

   scanf("%d",&p);
   a[p]=1;
}

k=0;
for(i=0;i<=n;i++){

  if(a[i]==1){k=7;o=i; break; }

}
for(i=0;i<=n+1;i++){

  if(a[i]==0&&i>0){printf("%d\n",i); break; }

}

return 0;
}
