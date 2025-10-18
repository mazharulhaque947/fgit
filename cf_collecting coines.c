#include<stdio.h>

int main()
{
    int a[3],i,j,k,n,m,t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<3;i++){
             scanf("%d",&a[i]);


        }
        scanf("%d",&m);
        for(i=0;i<2;i++){ for(j=i+1;j<3;j++){  if(a[i]<a[j]){ k=a[i];a[i]=a[j]; a[j]=k; } } }
        x=0;
        for(i=1;i<3;i++){ x+=a[0]-a[i]; }
        m=m-x;
         k=m;
        if(k>=0&&k%3==0){ printf("YES\n");}
        else{ printf("NO\n");  }

    }

    return 0;
}
