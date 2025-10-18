#include<stdio.h>
int rt(int,int,int,int,int,int);
int main()
{
    int x[3],y[3],i,j,k,l,b[3],v[50];
   for(i=0;i<3;i++){ scanf("%d %d",&x[i],&y[i]);}
  // for(i=0;i<11;i++){b[i]=3;}

  // for(i=0;i<3;i++){


b[0]=rt(x[0],y[0],x[1],y[1],x[2],y[2]);
b[1]=rt(x[1],y[1],x[2],y[2],x[0],y[0]);
b[2]=rt(x[2],y[2],x[0],y[0],x[1],y[1]);

   for(i=0;i<3;i++){


v[(i+0)*12+0]=rt(x[i%3]+1,y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+1]=rt(x[i%3]-1,y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+2]=rt(x[i%3],y[i%3]+1,x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+3]=rt(x[i%3],y[i%3]-1,x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);

 v[(i+0)*12+4]=rt(x[i%3],y[i%3],x[(i+1)%3]+1,y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+5]=rt(x[i%3],y[i%3],x[(i+1)%3]-1,y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+6]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3]+1,x[(i+2)%3],y[(i+2)%3]);
 v[(i+0)*12+7]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3]-1,x[(i+2)%3],y[(i+2)%3]);

 v[(i+0)*12+8]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3]+1,y[(i+2)%3]);
 v[(i+0)*12+9]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3]-1,y[(i+2)%3]);
 v[(i+0)*12+10]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]+1);
 v[(i+0)*12+11]=rt(x[i%3],y[i%3],x[(i+1)%3],y[(i+1)%3],x[(i+2)%3],y[(i+2)%3]-1);
   }
 for(i=0;i<48;i++){ printf("\n v[%d]=%d ",i,v[i]);}
   k=0;
   for(i=3;i<36;i++){  if(v[i]==1){k=1; break ;} }
   printf("\n %d %d %d",b[0],b[1],b[2]);
if(b[0]==1||b[1]==1||b[2]==1){

    printf("tri\n");
}

else if(k==1){

     printf("hhhtri\n");
}
else{  printf("tqqqqqqqqqqqqqqqqqqqri\n");}

    return 0;
}
int rt(int x,int y,int xx,int yy ,int xxx,int yyy){
printf("\n %d %d %d %d %d %d",x,y,xx,yy,xxx,yyy);
int z,k,l;
k=(yyy-y)*(xx-x);
l=(xxx-x)*(yy-y);
printf("\n from %d %d",l,k);
if(-1*k==l&&(k!=0&&l!=0)){ return 1;}

else{ return 8;}

}
