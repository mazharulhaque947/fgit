#include<stdio.h>
#include<string.h>

int main()
{
    int n,m,i,j,k,l,o,p,a[4],r;
    char b[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){  scanf("%s",b[i]);}
    o=0;
    r=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if(b[i][j]=='W'){

            for(k=0;k<4;k++){ a[k]=0;}
            if(i==0){ a[0]=1;}
            if(i==n-1){ a[1]=1;}
            if(j==0){ a[2]=1;}
            if(j==m-1){ a[3]=1;}

              if(b[i-1][j]=='P'&&a[0]==0){ r++;}
           else if(b[i+1][j]=='P'&&a[1]==0){ r++;}
             else if(b[i][j-1]=='P'&&a[2]==0){ r++;}
            else if(b[i][j+1]=='P'&&a[3]==0){ r++;}

           }

        }

    }
    printf("%d\n",r);
    return 0;
}
