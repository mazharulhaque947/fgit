
#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l,m,n,t,a[200],h;
char b[200];
scanf("%d",&t);
while(t--){
  // for(i=0;i<200;i++){a[i]=0;}

  scanf("%s",b);
  n=strlen(b);
  k=0;
  l=0;
  for(i=0;i<n;i++){if(b[i]=='0'){k=k+1;} if(b[i]=='1'){l=l+1;}}
  j=0;
  for(i=0;i<n;i++){


    if(b[i]=='0'){
        l=l-1;
        if(l>=0){
            j=j+1;
        }
        else{ break ;}



    }
    if(b[i]=='1'){


        k=k-1;
        if(k>=0){
            j=j+1;
        }
        else{ break ;}


    }


  }




   printf("%d\n",n-j);
}
return 0;}
