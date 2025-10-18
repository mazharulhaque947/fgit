#include<stdio.h>

#include<string.h>

int main()
{

    int a[18],i,j,k,n;
    char b[4][5];
    for(i=0;i<18;i++){ a[i]=0;}
   for(i=0;i<4;i++){

    scanf("%s",b[i]);}
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            for(k=0;k<4;k++) {

                    if(k==0){if(b[i][j]=='#'){  a[2*(i*3+j)]=a[2*(i*3+j)]+1; }

                    else{ a[(i*3+j)*2+1]=a[2*(i*3+j)+1]+1;  }}


                     if(k==1){if(b[i+1][j]=='#'){ a[2*(i*3+j)]=a[2*(i*3+j)]+1; }

                    else{ a[(i*3+j)*2+1]=a[2*(i*3+j)+1]+1;  }}

                     if(k==2){ if(b[i][j+1]=='#'){  a[2*(i*3+j)]=a[2*(i*3+j)]+1; }

                    else{ a[(i*3+j)*2+1]=a[2*(i*3+j)+1]+1;  }}

                     if(k==2){ if(b[i+1][j+1]=='#'){  a[2*(i*3+j)]=a[2*(i*3+j)]+1; }

                    else{ a[(i*3+j)*2+1]=a[2*(i*3+j)+1]+1; }}


                    }

        }}
        k=0;

        for(i=0;i<9;i++){
              //  printf(" %d  %d ",a[2*i],a[2*i+1]);
            if(a[2*i+1]<=1||a[2*i]<=1){ k=10; break ;}

        }
        if(k==0){ printf("NO\n");}
        else{ printf("YES\n");}

    return 0;
}
