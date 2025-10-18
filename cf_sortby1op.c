#include<stdio.h>

int main()

{
    int n,i,j,k,l,p,o,r[100];
    scanf("%d",&n);
    long long a[100];
    p=0;
    o=0;
    r[0]=0;
    l=0;
    for(i=0;i<n;i++){  scanf("%lld",&a[i]);
         if(i==1){  if(a[i]>a[i-1]){ k=0;} else if(a[i]<a[i-1]){ k=1;} }
        if(i>0){
            if(k==0){

            if(a[i]>a[i-1]){  }
            else{ k=1;p=p+1;  l=l+1; r[l]=i-1; l=l+1; r[l]=i;   }

            }
            if(k==1){
                if(a[i]<a[i-1]){ }

                else{ o=o+1; k=0; l=l+1; r[l]=i-1; l=l+1; r[l]=i;}

            }

            if(k==0){

            if(a[i]>a[i-1]){  }
            else{ k=1;p=p+1;}

            }
            if(i==n-1){ if(k==1){o=o+1;} if(k==0){ p=p+1;}l=l+1; r[l]=i; }

        }
       // printf("\n  %d  %d ",p,o);



     }

     //for(i=0;i<l+5;i++){  printf("  %d  ",r[i]);}
//printf("%d %d %d",k,p,o);
     if(p==1&&o==0){ printf("yes\n"); printf("1 1\n");}
     else if(o==1&&p==0){printf("yes\n"); printf("1 %d\n",n); }
     else if( p==1 && o==1){

        if( k==1){
//printf("  %d %d ",a[r[1]-1] ,a[r[l] ]);
           if(a[r[1]-1]<a[r[l]]) {printf("yes\n");  printf("%d %d\n",r[l-1],r[l]+1);}
                else{ printf("no\n");}

        }
        else if(k==0){
//printf("  %d %d ",a[r[0]] ,a[r[l-1] ]);
             if(a[r[0]]<a[r[l-1]]) {printf("yes\n");  printf("%d %d\n",r[0]+1,r[1]+1);}
                 else{ printf("no\n");}
        }

     }

     else if(p==2&&o==1){
//printf("  %d %d %d %d",a[r[1]-1] ,a[r[3] ],a[r[1]],a[r[5] ]);
        if(a[r[1]-1]<a[r[3] ]&&a[r[1]]<a[r[5] ]){  printf("yes\n"); printf("%d %d",r[1]+1,r[3]+1);}
else{ printf("no\n");}
     }
     else{ printf("no\n");}

    return 0;
}

