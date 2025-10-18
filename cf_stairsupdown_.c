#include<stdio.h>

int main()
{   int n,h[101],i,j,k,l,s,p,a[100];
scanf("%d",&n);
for(i=0;i<=n;i++){h[i]=0; }
p=0;
for(i=0;i<n;i++){  scanf("%d",&a[i]); if(a[i]>a[p]){ p=i; }  h[a[i]]+=1;}
s=1;
for(i=0;i<a[p];i++){ if(h[i]>=2){ s+=2; } else{ s+= h[i]; } }
printf("%d\n",s);
for(i=0;i<a[p];i++){ if(h[i]>=1){ printf("%d ",i);  h[i]-=1;} }
printf("%d ",a[p]);
  for(i=a[p]-1;i>=0;i--){ if(h[i]>=1){ printf("%d ",i);  h[i]-=1;} }
    //p=0;
    //for(i=0;i<n;i++){  s=s+h[i]-p+1;    if(i==n-1){ break ;} s=s+1; if(h[i+1]>=h[i]){ p=h[i]; } else {p=h[i+1]; s=s+(h[i]-h[i+1]);} }
   // printf("%d\n",s);
    return 0;
}

