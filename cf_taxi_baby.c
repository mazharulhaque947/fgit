#include<stdio.h>

int main()
{
    int a[4],i,j,k,l,n,s;
    scanf("%d",&n);

    for(i=0;i<4;i++){ a[i]=0;}
    for(i=0;i<n;i++){ scanf("%d",&k);  a[k-1]+=1;  }
    s=0;
    s+=a[3];
    l=a[0]-a[2];
    if(l<=0){ a[0]=0;}else{

        a[0]=l;

    }
    s+=a[2];
    if(a[1]>0){  l=l-(a[1]%2)*2; }
    if(l<=0){ a[0]=0; }
    else{ a[0]=l;}

    l=0;
    if((a[0]%4)>0){l=1;}
    s+=(a[0]/4)+l;
    if(a[1]>0){  s+=(a[1]/2)+(a[1]%2); }
    printf("%d\n",s);


    return 0;
}
