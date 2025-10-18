#include<stdio.h>

int main()
{   int n,h[100],i,j,k,l,s,p;
scanf("%d",&n);
for(i=0;i<n;i++){  scanf("%d",&h[i]);}
    s=0;
    p=0;
    for(i=0;i<n;i++){  s=s+h[i]-p+1;    if(i==n-1){ break ;} s=s+1; if(h[i+1]>=h[i]){ p=h[i]; } else {p=h[i+1]; s=s+(h[i]-h[i+1]);} }
    printf("%d\n",s);
    return 0;
}
