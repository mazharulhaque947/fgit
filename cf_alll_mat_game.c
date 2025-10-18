#include<stdio.h>

int com(const void *a,const void *b)
{
    return -1*(*(int *)a-*(int *)b);

}
int main()
{
    int t,i,j,k,l,m,n,a[100],s,z,h,r;
    scanf("%d",&t);
    while(t--){
     scanf("%d",&n);
     scanf("%d",&k);
     r=1;
       for(i=0;i<n;i++){scanf("%d",&a[i]);}


       h=a[0];
       for(i=0;i<n;i++){


        if(a[i]==h){r=r*1;}



                 else{r=r*0; break ;}  }
       qsort(a,n,4,com);
       s=0;
       z=0;
       for(i=0;i<n;i++){if(i%2==0){s=s+a[i];} else{z=z+a[i];}}
      //  for(i=0;i<n;i++){printf(" %d %d %d",a[i],s,z);}
        s=s-z-k;
        if(r==1&&n%2==1){printf("%d\n",h);}
else if(s>=0){printf("%d\n",s);}
else{printf("%d\n",0);}
    }


    return 0;
}
