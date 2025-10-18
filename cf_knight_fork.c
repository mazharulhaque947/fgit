#include<stdio.h>

int main()
{
    int a,b,i,j,k,l,kx,ky,qx,qy,t,kk[16],qk[16],r[20],u[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        scanf("%d %d",&kx,&ky);
        scanf("%d %d",&qx,&qy);
        kk[0]=kx+a;
        kk[1]=ky+b;
        kk[2]=kx+a;
        kk[3]=ky-b;
        kk[4]=kx-a;
        kk[5]=ky+b;
        kk[6]=kx-a;
        kk[7]=ky-b;
        kk[8]=kx+b;
        kk[9]=ky+a;
        kk[10]=kx+b;
        kk[11]=ky-a;
        kk[12]=kx-b;
        kk[13]=ky+a;
        kk[14]=kx-b;
        kk[15]=ky-a;

         qk[0]=qx+a;
        qk[1]=qy+b;
        qk[2]=qx+a;
        qk[3]=qy-b;
        qk[4]=qx-a;
        qk[5]=qy+b;
        qk[6]=qx-a;
        qk[7]=qy-b;
        qk[8]=qx+b;
        qk[9]=qy+a;
        qk[10]=qx+b;
        qk[11]=qy-a;
        qk[12]=qx-b;
        qk[13]=qy+a;
        qk[14]=qx-b;
        qk[15]=qy-a;
        r[0]=0;
        u[0]=0;
       for(i=0;i<8;i++){ l=0;  for(j=0;j<r[0];j++){ if(kk[2*i]==r[2*(j+1)]&&kk[2*i+1]==r[2*(j+1)+1]){ l=1; break;} }

       if(l==0){r[2*r[0]+2]=kk[2*i]; r[2*r[0]+2+1]=kk[2*i+1];r[0]++;}   }
       // for(i=0;i<r[0];i++){ printf("%d %d \n",r[2*(i+1)],r[2*(1+i)+1]);}

        for(i=0;i<8;i++){ l=0;  for(j=0;j<u[0];j++){ if(qk[2*i]==u[2*(j+1)]&&qk[2*i+1]==u[2*(j+1)+1]){ l=1; break;} }

       if(l==0){u[2*u[0]+2]=qk[2*i]; u[2*u[0]+2+1]=qk[2*i+1];u[0]++;}   }
       // for(i=0;i<u[0];i++){ printf("%d %d \n",u[2*(i+1)],u[2*(1+i)+1]);}
         l=0;
        for(i=0;i<r[0];i++){

            for(j=0;j<u[0];j++){ if(  r[2*(i+1)]==u[2*(j+1)] && r[2*(i+1)+1]==u[2*(j+1)+1] ){ l+=1;}  }

        }
        printf("%d\n",l);

    }

    return 0;
}
