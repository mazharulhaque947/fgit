#include<stdio.h>

int main()
{
    int a[100],b[100],i,j,k,p,c,q,h,t,l,n;


    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);  }

    for(i=0;i<n;i++){ scanf("%d",&b[i]); }
    if(a[i]==b[i]){  q=0;} else{ q=1;}
    p=c=h=0;
    for(i=0;i<n;i++)
    {
        if(q==0)
        {
          if(a[i]==b[i]){ }
          else{  q=1; p=p+1; }



        }
        if(q==1)
        {

            if(a[i]!=b[i]){
                if(h==0){ k=b[i]-a[i];h=h+1;}
                else{  if(k==(b[i]-a[i])){ h=h;} else{ h=-1; break ;}  }


            }
          else{  q=0; c=c+1; }


        }
                if(q==0)
        {
          if(a[i]==b[i]){ }
          else{  q=1; p=p+1; }



        }

        if(i==n-1){  if(q==0){p=p+1;}else{c=c+1;} }
if(c>1){ break ;}


    }
    printf("%d %d %d",c,p,h);
    if(c==1&&h>0){ printf("YES\n");}
    else{   printf("NO\n");}
    return 0;
}
