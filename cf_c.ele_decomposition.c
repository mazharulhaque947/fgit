#include<stdio.h>

int main()
{

    int n,m,k,l,i,j,o,p,a[100],b[100],c[100],d[100],t,x[100],y[100],u,v,h,an[100],za[100],z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++){ //printf("%d",b[i]);
         b[i]=0;}
        k=0;
        l=0;
        for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]>k){k=a[i];}b[a[i]-1]++; if(b[a[i]]-1>l){l=b[a[i]]-1;} }
        p=o=0;
        for(i=0;i<n;i++){  if(b[i]==0){x[o]=i; o++;}else if(b[i]==2){y[p]=i; p++; }}
        v=0;
        if(p==o){
            for(i=0;i<o;i++){ if(x[i]>y[i]){ v=1; break ; } }
        }
        else{  v=1;}

        if(k!=n||b[0]>1||l>2||o!=p||v==1){ printf("NO\n"); }

        else{

            printf("YES\n");
           u=0;
           v=0;
            for(i=0;i<n;i++){ if(b[i]==1){ c[u]=d[u]=1+i;u++; }else if(b[i]==0){ }else{ c[u]=c[u+1]=i+1; d[u]=d[u+1]=x[v]+1;h= d[u+1];
            d[u+1]=c[u+1];c[u+1]=h;v++;u+=2; }   }



             // for(i=0;i<n;i++){ printf(" i=%d  %d %d  \n",i,c[i],d[i]);}
              for(i=0;i<n;i++){za[i]=0; }
              for(i=0;i<n;i++){
              k=l=v=u=h=0;
              k=n-1;
              u=(k-l+1)/2;
              v=c[u];
              if(v<d[u]){ v=d[u]; }
             // printf("l=%d k=%d u=%d v=%d %d\n",l,k,u,v,a[i]);
              while( k-l>2&&v!=a[i])
              {  // if(za[u]==1){  printf("          previous  \n");break; }
                  // printf(" in binary search i= %d l=%d k=%d u=%d v=%d %d\n",i,l,k,u,v,a[i]);
                  if(v>a[i]){
                         k=u-1;



                  }
                  else if(v<a[i]){  l=u+1; }
          if(k-l<=2){ break;}
                   u=(k-l+1)/2;
              v=c[u];
              if(v<d[u]){ v=d[u]; }


              }
              /* v=c[u];
              if(v<d[u]){ v=d[u]; }

              if(v==a[i]){ an[i]=u;  }
               v=c[u+1];
              if(v<d[u+1]){ v=d[u+1]; }
              else if(v==a[i]){ an[i]=u+1;    }
               v=c[u-1];
              if(v<d[u-1]){ v=d[u-1]; }

              else{  an[i]=u-1;         }*/

              for(j=u-3;j<u+4;j++){
                //  printf("in loop i=%d a[i]=%d j=%d v=%d \n ",i,a[i],j,v);
                    v=c[j];
              if(v<d[j]){ v=d[j]; }
             if(a[i]==v&&za[j]==0) {
                    za[j]=1;
                  an[i]=j;// printf("             a[i]=%d j= %d found\n",a[i],j);
                  break ;
              }
    }

                 }



                 for(i=0;i<n;i++){printf("%d ",c[an[i]]);}
                 printf("\n");
                 for(i=0;i<n;i++){printf("%d ",d[an[i]]);}
                  printf("\n");

        }


    }



    return 0;
}
