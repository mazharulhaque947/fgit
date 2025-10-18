#include<stdio.h>

int main()
{
    int a[2],b[2],t,n[4],m,i,j,x[8]={0,0,0,1,1,0,1,1};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);

       // for(i=0;i<2;i++){ for(j=0;j<2;j++){ if(a[i]>b[j]){ m++; } } }
       //n=0;
       for(i=0;i<4;i++){n[i]=0;}
       for(i=0;i<4;i++){
             m=0;
      // n=0;
        if(a[x[2*i]]>b[x[2*i+1]]){m++;  }else if(a[x[2*i]]==b[x[2*i+1]]){}else{ m--;} if(a[1-x[2*i]]>b[1-x[2*i+1]]){m++;  }
        else if(a[1-x[2*i]]==b[1-x[2*i+1]]){}  else{ m--;}

        if(m>=1){n[i]=1;}

       }
       m=0;
for(i=0;i<4;i++){m+=n[i];}
       printf("%d\n",m);
    }

    return 0;
}
