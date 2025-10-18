#include<stdio.h>

#include<string.h>
int co( const void *a, const void *b){


return ( *(int *)b - *(int *)a  );
}
int main()
{
    int i,j,k,l,m,n,a[1000],c[27],s,o;
    char b[1000];
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%s",b);
    for(i=0;i<27;i++){   c[i]=0;}
    for(i=0;i<n;i++){   c[b[i]-65]=c[b[i]-65]+1;}
    //for(i=0;i<27;i++){printf(" %d ",c[i]);} printf("\n");

    qsort(c,27,sizeof(int),co);
  //  for(i=0;i<27;i++){printf(" %d ",c[i]);} printf("\n");
    s=0;
    o=0;
    for(i=0;i<27;i++){
         if(s==k){ break ; }
        if(s+c[i]<=k){  a[i]=c[i]; s=s+c[i]; o=o+1; } else { a[i]=k-s; s=s+k-s; o=o+1; break ;  }


    }
    s=0;
    for(i=0;i<o;i++){//printf(" %d ",a[i]);


     s=s+a[i]*a[i];}
     // printf("\n");
printf("%d",s);
    return 0;
}
