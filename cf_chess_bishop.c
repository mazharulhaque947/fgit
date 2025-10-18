#include<stdio.h>
# define lo(n) for(i=0;i<n;i++)
#define loo(n,m) for(i=0;i<n;i++) for(j=0;j<m;j++)
int main()
{
    int n,a[200][2],b[101][101],x,y,i,j,k,m,o;
    scanf("%d",&n);
    o=100;
//loo(1001,1001) b[i][j]=0;
 for(i=0;i<o+1;i++){ for(j=0;j<o+1;j++){ b[i][j]=0;}}
     for(i=0;i<n;i++){ scanf("%d %d",&a[i][0],&a[i][1]); b[a[i][0]][a[i][1]]=1; }
      k=0;
//for(i=0;i<50;i++){ for(j=0;j<50;j++){ printf("%d ",b[i][j]);}printf("\n");}
     for(i=0;i<n;i++){

     k=k-1;
     x=a[i][0];
     y=a[i][1];
    // printf("%d %d\n ",x,y);
    // printf(" \n main diagonal \n");

     while( !(x==1||y==1) ){  //printf(" changing %d %d",x,y);

      x-- ;y--;

       //printf(" to %d %d \n",x,y);
        }
     while( !(x==o+1||y==o+1) ){ // printf("k= %d at %d %d  ",k,x,y);
      k=k+b[x][y];
      // printf("k= %d at %d %d ",k,x,y);
      x++;y++;
     // printf("k= %d at %d %d\n",k,x,y);
       }

     k=k-1;
      x=a[i][0];
     y=a[i][1];
    // printf("%d %d\n ",x,y);
    // printf(" \n secondery  diagonal \n");
     while( !(x==1||y==o) ){

            //printf(" changing %d %d",x,y);
            x-- ;y++;
    // printf(" to %d %d \n",x,y);
      }

     while( !(x==o+1||y==o+1) ){
            //printf("k= %d at %d %d  ",k,x,y);
             k=k+b[x][y];
             //printf("k= %d at %d %d ",k,x,y);
     x++; y--;
     //  printf("k= %d at %d %d\n",k,x,y);
       }


     }
     printf("%d\n",k/2);

    return 0;
}
