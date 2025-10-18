#include<stdio.h>

int main(){
int a,i,j,h[4],r;
scanf("%d",&a);
j=a;
i=3;
while(j>0){



    h[i]=j%10;
    j=j/10;
    i=i-1;
}r=1;
h[3]=(h[3]+1)%10;
while(h[0]==h[1]||h[1]==h[2]||h[2]==h[3]||h[3]==h[0]||h[0]==h[2]||h[1]==h[3]){

  h[3]=h[3]+1;
  if(h[3]==10){


    h[3]=0;
    h[2]=h[2]+1;

  if(h[2]==10){


    h[2]=0;
    h[1]=h[1]+1;

  if(h[1]==10){


    h[1]=0;
    h[0]=h[0]+1;


  if(h[0]==10){


    h[0]=0;
    r=0;
    break ;


  }


  }


  }

  }

}
if(r==0){ printf("out\n");}
else{printf("%d%d%d%d\n",h[0],h[1],h[2],h[3]);}
return 0;}
