
#include<stdio.h>

int main()
{ int i,j,k,t,l,n,a[500];
scanf("%d",&t);
while(t--){

    scanf("%d",&n);
    k=0;
    l=0;
    for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2==0){ k=k+1;} else { l=l+1;}}
    if(k!=0){ printf("%d\n",l+1);}
    else{printf("%d\n",0);}
}



return 0;
}




