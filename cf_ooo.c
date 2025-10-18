#include<stdio.h>

int main()
{
    int i,j,k,l,n,m,a[1010],c[1010],b[1010],p,o,s,z;
    scanf("%d %d",&n,&m);
    for(i=0;i<1001;i++){ c[i]=0;}
    for(i=0;i<m;i++){ scanf("%d",&a[i]); c[a[i]]=c[a[i]]+1;  }
     i=0;
     j=0;

     while(i<m)
     {
         while(c[j]==0){ j=j+1;}
       k=c[j];
       while(k>0){

        b[i]=j;
        i=i+1;
        k=k-1;

       }
       j=j+1;


     }
    // for(i=0;i<m;i++){ printf("%d  ",b[i]);}
     p=n;
     i=0;
     s=0;
     while(p>0){
      z=0;
      while(b[i]==0){ i=i+1;}
      j=p-b[i];
      if(j<0){ z=-1*j;}


      s=s+(0.5*(b[i]*(b[i]+1)))-(0.5*(z*(z+1)));

       p=p-b[i];
       i=i+1;
     }
     l=s;
     j=c[b[m-1]];
     s=0;
     p=n;
     i=m-1;
     k=b[i];
     while(p>0){
     // k=b[i];
     // j=j+c[b[i]];

        z=j;
        if(p<j){ z=p; }
        s=s+(z*k);
        p=p-z;
        k=k-1;
        if(i>=1){
      if(k==b[i-c[b[i]]]){  i=i-c[b[i]];if(i>=0) {j=j+c[b[i]];} else {j=j;} k=b[i];}
        }


     }


    printf("%d %d",s,l);
    return 0;
}
