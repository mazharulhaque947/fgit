#include<stdio.h>

int main()
{
    int i,j,k,l,n,m,a[100],b[5050],u,q,z,r,p;

    scanf("%d",&n);
    m=0;
    for(i=0;i<n;i++){


        scanf("%d",&a[i]);
       // if(a[i]==1){ m=m+1;}
    }
    for(i=0;i<n;i++){if(a[i]==1){ m=m+1;}}
   // printf(" m=%d\n",m);
    u=0;
    z=0;
    for(i=0;i<n;i++){
 q=0;
            z=0;
            for(p=n;p>i;p--){
            q=0;
            z=0;
        for(j=i;j<p;j++){

            if(a[j]==0){q=q+1;}
            else{z=z+1;}

        }
      //  printf(" %d  %d \n ",q,z);
        b[u]=q-z;
        u=u+1;
    }
    }r=b[0];
    for(i=0;i<u;i++){if(b[i]>r){r=b[i];}}
   // printf("\n r=%d",r);
   if(r>0){r=r;}
   else{r=0;}
    //r=(r>0)?r:0;
    m=m + r;
    printf("%d",m);
    return 0;
}
