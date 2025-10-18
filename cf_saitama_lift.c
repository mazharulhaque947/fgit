#include<stdio.h>

int main()
{
    int i,k,j,n,a[100],b[100],m,s;
    scanf("%d",&n);
    scanf("%d",&m);

    s=0;
    for(i=0;i<n;i++){ scanf("%d",&a[i]); scanf("%d",&b[i]);}

    for(i=n-1;i>=0;i--){
     if(s+m-a[i]<b[i]){ s=b[i]; m=a[i];} else{s=s+m-a[i]; m=a[i];  } }
    s=s+m;
    printf("%d\n",s);

    return 0;
}
