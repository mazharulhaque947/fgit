#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,a[100],b[100],t,v;
    scanf("%d",&t);




    n=0;
    l=0;
    m=1000;

   // for(i=2;i<m;i++){ n=n+i; j=sqrt(n); if(j*j==n){ a[l]=i; l++; } }

    for(i=1;i<=m;i++){   n=n+i;j=sqrt(n); if(j*j==n){n=n+i+1; if(i!=m){a[i-1]=(i+1);a[i]=i; i++;} else{ a[m-1]=m;} } else{ a[i-1]=i; } }
   // for(i=0;i<m;i++){ printf("%d ",a[i]);  }
   // printf("\n");
  while(t--){

    scanf("%d",&n);
    if(n==1){ printf("-1\n"); }
    else{
        if(v=((n*(n+1))/2),j=sqrt(v) ,j*j==v ){
             printf("%d ",n);
             for(i=1;i<n-1;i++){ printf("%d ",a[i]);  }
            printf("%d ",a[0]);
        }
       else{
        for(i=0;i<n;i++){ printf("%d ",a[i]);  }
       }

   printf("\n");




    }

  }
  char w[100][10];
for(i=0;i<100;i++){
  // strcpy(w[i],(char)i);
   printf("  %s ",(char)i);



}
    return 0;
}

