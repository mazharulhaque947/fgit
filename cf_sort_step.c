#include<stdio.h>

int main()
{
    int t,i,j,k,l,n,m,a[200],b[200];
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d %d",&n,&k);
     m=0;
     for(i=0;i<n;i++){ scanf("%d",&a[i]); b[i]=a[i]-(i+1);if(b[i]<0){b[i]*=-1; }  if(b[i]%k!=0){ m+=1;} }

        if(m==0){  printf("0\n");}
        else if(m<=2){ printf("1\n"); }

        else{ printf("-1\n"); }

    }






    return 0;
}
