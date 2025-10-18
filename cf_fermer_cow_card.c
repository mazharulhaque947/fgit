#include<stdio.h>
int com(const void *a , const void *b){


return (*(int*)a-*(int*)b);
}
int main()
{
    int a[200][200],n,m,i,j,k,l,o,p,t,b[200];
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){ for(j=0;j<m;j++){  scanf("%d",&a[i][j]); } }
        for(i=0;i<n;i++){  qsort(a[i],m,sizeof(int),com); }

         for(i=0;i<n;i++){ for(j=0;j<m;j++){  printf("%d  ",a[i][j]); } printf("\n"); }
         for(i=0;i<n;i++){ b[i]=a[i][0];  }
         qsort(b,n,sizeof(int),com);
         k=0;
          for(i=0;i<n-1;i++){ if(b[i+1]-b[i]>1){ k=1; break;}  }
          if(k==0){


                for(i=0;i<n;i++){ for(j=0;j<m-1;j++){ if(a[i][j+1]-a[i][j]!=n){ k=1; break;} } if(k==1){ break;}}

            if(k==0){

            for(i=0;i<n;i++){ for(j=0;j<n;j++){ if(b[i]==a[j][0]){  printf("%d ",j+1);} }  }

printf("\n");
          }
          else{  printf("NO\n");}


          }
          else{  printf("NO\n");}

    }

    return 0;
}
