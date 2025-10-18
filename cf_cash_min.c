#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],i,j,k,n,m;
    scanf("%d",&n);
    k=0;
    c[0]=1;
    for(i=0;i<n;i++)
    {
        scanf("%d  %d",&a[i],&b[i]);

        if(i>0){

            if((a[i]!=a[i-1] )||(b[i]!=b[i-1])){/* printf("ig %d %d %d",i,k,c[k]) ;*/k=k+1; c[k]=1; /*printf("ig %d  %d  %d\n",i,k,c[k]) ;*/}
            else{/* printf("igel %d %d %d",i,k,c[k]); */c[k]=c[k]+1;/* printf("igel %d %d %d \n",i,k,c[k]); */}
        }

    }
    k=k+1;
    m=c[0];
    for(i=0;i<k;i++){ if(m<c[i]){ m=c[i];} /*printf("%d %d  lll  ",c[i],k);*/}
     printf("%d\n",m);
    return 0;
}
