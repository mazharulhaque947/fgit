#include<stdio.h>

int main()
{  int n,x[100],y[100],i,j,k,m,l,h,f,c[100],d[4],sa,sb;
scanf("%d",&n);
k=l=h=f=0;
sa=sb=0;
d[0]=d[1]=d[3]=d[2]=0;
for(i=0;i<n;i++){ scanf("%d",&x[i]);if(x[i]%2==0){k++;}else{l++;} scanf("%d",&y[i]);if(y[i]%2==0){h++;}else{f++;}
sa=sa+x[i]; sb=sb+y[i];
if(x[i]%2==0&&y[i]%2==0){c[i]=5;d[0]+=1;} else if(x[i]%2==0){ c[i]=4; d[1]+=1;}else if(y[i]%2==0){c[i]=3; d[2]+=1;}else{c[i]=2; d[3]+=1;}
 }
if(f%2==0&&l%2==0){ printf("0\n"); }
else if((d[1]+d[2])%2==1){  printf("-1\n");}
//else if(d[3]%2==1){ printf("-1\n"); }
else if(sa%2==1&&sb%2==1&&(d[1]+d[2]<1)){ printf("-1\n"); }
else if((sa+sb)%2==1&&(d[1]+d[2]<2)){ printf("-1\n"); }
else { printf("1\n"); }

    return 0;
}
