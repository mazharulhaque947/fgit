#include<stdio.h>
#include<string.h>
int main()
{

    int t,o,p,c,d,a[4],i,j,k,l,y,x,m;
    char b[1000];
    scanf("%d",&t);
    scanf("%d",&o);
    scanf("%d",&p);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%s",b);
    a[0]=a[1]=a[2]=a[3]=0;
    for(i=0;i<t;i++){ if(b[i]=='E'){ a[0]=a[0]+1; }  else if(b[i]=='S'){ a[1]=a[1]+1; } else if(b[i]=='W'){ a[2]=a[2]+1; } else if(b[i]=='N'){ a[3]=a[3]+1;}  }
    k=c-o;
    l=d-p;
    j=0;
    if(l>=0&&k>=0){  if(a[0]>=k&& a[3]>=l){ } else{ j=1;} }
     else if(l<=0&&k<=0){  if(a[2]>=-1*k&& a[1]>=-1*l){ } else{ j=1;} }
     else if(l>=0&&k<=0){  if(a[2]>=-1*k&& a[3]>=l){ } else{ j=1;} }
     else if(l<=0&&k>=0){  if(a[0]>=k&& a[1]>=-1*l){ } else{ j=1;} }
     printf("  %d %d %d %d %d %d     ",a[0],a[1],a[2],a[3],k,l);
     if(j==1){ printf("-1");}
     else{
        j=0;
            a[0]=a[1]=a[2]=a[3]=0;
            m=0;
        for(i=0;i<t;i++)
        {
            if(b[i]=='E'){ a[0]=a[0]+1; }  else if(b[i]=='S'){ a[1]=a[1]-1; } else if(b[i]=='W'){ a[2]=a[2]-1; } else if(b[i]=='N'){ a[3]=a[3]+1;}

            if(l>=0&&k>=0){   if((l<=a[3])&&(k<=a[0])){ break ; } }
     else if(l<=0&&k<=0){     if((l>=a[1])&&(k>=a[2])){ break ; } }
     else if(l>=0&&k<=0){   if((l<=a[3])&&(k>=a[2])){ break ; } }
     else if(l<=0&&k>=0){   if((l>=a[1])&&(k<=a[0])){ break ; } }




        }

        printf("%d",i+1);

     }
    return 0;
}
