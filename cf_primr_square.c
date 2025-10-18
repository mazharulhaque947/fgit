#include<stdio.h>

int main()
{
    int n,a[10000],b[10000],i,j,k,l,o,p,s,c,t;
    scanf("%d",&t);

    while(t--){
    scanf("%d",&n);

    for(i=0;i<10000;i++){ a[i]=2;}
    c=0;
    for(i=2;i<102;i++){ for(j=i+1;j<10000;j++){ if(a[j]==2){if(j%i==0){ a[j]=1;c=c+1;} } }}
    a[0]=1;
    a[1]=1;
    o=0;
   for(i=0;i<10000;i++){if(a[i]==1){ b[o]=i; o=o+1;}


  //  printf("%d %d \n",a[i],i) ;

    }
     p=0;
     s=0;
     l=0;
     while(1){
       s=0;
     for(i=0;i<n;i++){ s=s+b[i+l];   }

       if(a[s]==2){ break;}

       else if(l+n>o|| s>=999){p=1; break; }
          l=l+1;
     }
     if(p==0){
        s=0;
        for(i=0;i<n;i++){   for(j=0;j<n;j++){ printf("%d ",b[l+((s+j)%n)]);} printf("\n"); s=s+1; }

     }
     else{

       for(i=0;i<n;i++){

        if(i==0){
            for(j=0;j<n;j++){if(j<=1){ printf("%d ",1);} else{  printf("%d ",0);} }


        }
        else if(i==n-1){

            for(j=0;j<n;j++){if(j>=n-2){ printf("%d ",1);} else{  printf("%d ",0);} }

        }
        else{


            for(j=0;j<n;j++){if(-1<=(j-i )&& (j-i)<=1){ printf("%d ",1);} else{  printf("%d ",0);} }
        }
        printf("\n");


       }




     }}

    return 0;
}
