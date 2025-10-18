#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a[5000],b[5000];
    scanf("%d",&n);
     scanf("%d",&a[0]);
    for(i=1;i<n;i++){ scanf("%d",&a[i]);   j=i;m=a[i]; while( j>0&&a[j-1]<m ){ a[j]=a[j-1]; j--;} a[j]=m;   }

     //for(i=0;i<n;i++){  printf("%d \n",a[i]);}

     m=0;
     for(i=n-1;i>=1;i--){// printf("%d %d %d\n",i,i-1,m);
     if(a[i]<a[i-1]){ m++;  }  }
     printf("%d\n",n-m);

    return 0;
}
