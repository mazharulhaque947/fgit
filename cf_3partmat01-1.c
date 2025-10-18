#include<stdio.h>

int main(){

int i,j,k,l,m,n,a[1000],b[1000],c,v,r,u;
scanf("%d",&n);
l=k=m=0;
for(i=0;i<n;i++){  scanf("%d",&a[i]); if(a[i]>0){ k+=1;} else if(a[i]<0){l+=1;} else{m+=1;} }
c=0;
v=0;
r=0;
while(1){


    if(a[c]<0){  printf("1 %d\n",a[c]); break ;}
    else{ c++;}
}

if(k>=1){   while(1){


    if(a[v]>0){  printf("1 %d\n",a[v]); break;}
    else{ v++;}
}

printf("%d",n-2);
for(i=0;i<n;i++){ if(i!=c&&i!=v){ printf(" %d",a[i]);} }
printf("\n");
}
else{printf("2");
c=c+1;
     while(1){


    if(a[c]<0){  printf(" %d",a[c]); c=c+1; r=r+1;}
    else{ c++;}
    if(r==2){printf("\n");  break ;}
}

u=0;
printf("%d",n-3);
for(i=0;i<n;i++){   if(a[i]<0){u=u+1;} if(((a[i]<0)&&u>3) ||a[i]>=0){ printf(" %d",a[i]);}}
printf("\n");
}

  return 0;
}
