
#include<stdio.h>

int main()
{
    int a[100000],b[100000],i,j,k,p,c,q,h,t,l,n;
//scanf("%d",&t);
//while(t--)
{

k=10;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);  }

    //for(i=0;i<n;i++){ scanf("%d",&b[i]); }
    if(n>1){
            k=0;
    if(a[1]==a[0]){  q=0; } else if(a[1]>a[0]) { q=1;} else if(a[1]<a[0]){ q=-1;}
    b[k]=q;
    p=c=h=0;
    for(i=1;i<n;i++)
    {
        if(q==0)
        {
          if(a[i]==a[i-1]){ }
          else if(a[i]>a[i-1]){  q=1; p=p+1; k=k+1;b[k]=q; }
             else if(a[i]<a[i-1]){  q=-1; p=p+1;k=k+1;b[k]=q;  }


        }
        if(q==1)
        {

            if(a[i]>a[i-1]){


            }
          else if(a[i]==a[i-1]){  q=0; c=c+1; k=k+1;b[k]=q; }
else if(a[i]<a[i-1]){  q=-1; c=c+1; k=k+1;b[k]=q; }

        }
                if(q==-1)
        {
          if(a[i]<a[i-1]){ }


 else if(a[i]==a[i-1]){  q=0; h=h+1; k=k+1;b[k]=q; }
else if(a[i]>a[i-1]){  q=1; h=h+1; k=k+1;b[k]=q; }

        }

        if(i==n-1){  if(q==0){p=p+1;}else if(q==1){c=c+1;}  else if(q==-1){h=h+1;} }
//if(c>1){ break ;}


    } k=k+1;}
//for(i=0;i<k;i++){  printf(" %d  ",b[i]);}
   // printf("%d %d %d",c,p,h);
  // if(n==1){  printf("YES\n"); }
   // else if(c<=1&&h>=0&&k>=0){ printf("YES\n");}
if(k<=3){

    if(k==3&&b[0]==1&&b[1]==0&&b[2]==-1){printf("YES\n");}
    else if(k==2&&b[0]==0&&b[1]==-1){printf("YES\n");}
    else if(k==2&&b[0]==1&&b[1]==0){printf("YES\n");}
    else if(k==1&&b[0]==0){printf("YES\n");}
    else{  printf("NO\n"); }
}

    else if(k>3||n==1){   printf("NO\n");}}
    return 0;
}
