#include<stdio.h>

int co(const void *a ,const void *b)
{
     return ( *(int*)a-*(int*)b );
}

int main()
{
    int a[100],b[100],i,j,k,n,m,c[100][3];
    long long nn;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);  b[i]=a[i]; }
    qsort(a,n,sizeof(int),co);
    scanf("%d",&m);
    for(i=0;i<m;i++){ scanf("%d",&c[i][0]); scanf("%d",&c[i][1]); scanf("%d",&c[i][2]); }
    for(i=0;i<m;i++){

        nn=0;
        if(c[i][0]==1){

            for(j=c[i][1]-1; j<c[i][2];j++){ nn=nn+b[j]; }


        }
        else{

             for(j=c[i][1]-1; j<c[i][2];j++){ nn=nn+a[j]; }

        }

       printf("%lld\n",nn);

    }
    return 0;
}
