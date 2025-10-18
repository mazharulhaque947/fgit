#include<stdio.h>

int main()
{
    int n,i,j,k,m,l,t,p,a[100],b[101],c[100];
    scanf("%d",&t);
    while(t--)

    {     scanf("%d",&n);
         for(i=0;i<n+1;i++){b[i]=0;}
        //scanf("%d",&n);
        for(i=0;i<n;i++){ scanf("%d",&a[i]);m=(a[i]-(i+1)); if(m<0){ m*=-1;}b[m]=1;

        //printf(" m values =%d %d \n",i,m);

         }
        l=0;

         for(i=0;i<=n;i++){ if(b[i]==1){ // printf(" c values =%d %d \n",l,i);
         c[l]=i; l++; }}
        // for(j=0;j<l;j++){ printf(" c==== %d %d \n",j,c[j]);}

         k=0;
         p=1;
         for(i=2;i<=c[l-1];i++){
             k=0;
            for(j=0;j<l;j++){ if(c[j]%i!=0){ k=1; break ;}}
            if(k==0){ p=i;}
         }
      printf("%d\n",p);
    }


    return 0;
}
