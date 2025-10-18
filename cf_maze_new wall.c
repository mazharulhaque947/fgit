#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,k,j,n,m,h[4],r,s,u,t,z,w;
    char a[10][10];
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){ scanf("%s",a[i]); }
   // for(i=0;i<n;i++){for(j=0;j<m;j++){printf("%c",a[i][j]);}printf("\n");}
w=0;

z=0;
t=0;
     while(t<k){
t++;
     for(i=0;i<n;i++){


        for(j=0;j<m;j++){ u=0;
               //  printf("newwwwwwwwwwwwwwwww i=%d j=%d t=%d \n",i,j,t);
             // if(a[i][j]!='.'){ printf("not foynddddddddddddddddddd %c i=%d j=%d t=%d \n",a[i][j],i,j,t);  }



                if(a[i][j]=='.'){

                        if(w==0){ a[i][j]='X'; u=1; break; }
                     //printf("fffffffffffffffffffffffoynddddddddddddddddddd %c i=%d j=%d t=%d \n",a[i][j],i,j,t);
else{
            for(r=0;r<4;r++){ h[r]=0;}
            if(i==0){ h[0]=1;}
             if(i==n-1){ h[1]=1;}
             if(j==0){ h[2]=1;}
             if(j==m-1){ h[3]=1;}
           //  for(r=0;r<4;r++){ printf(" %d ",h[r]);}

             s=0;
             for(r=0;r<4;r++){ s=h[r]+s;}
            r=0;
            if( h[0]==0 && (a[i-1][j]=='#' ||a[i-1][j]=='X'   ) ){ r++;}
             if( h[1]==0 && (a[i+1][j]=='#'|| a[i+1][j]=='X'  )){ r++;}
             if( h[2]==0 && (a[i][j-1]=='#'|| a[i][j-1]=='X') ){ r++;}
             if( h[3]==0 &&( a[i][j+1]=='#'|| a[i][j+1]=='X') ){ r++;}


             // if( h[0]==0 ){ if(a[i-1][j]=='.'){ } else{ r++;} }
             //if( h[1]==0 ){ if(a[i+1][j]=='.'){} else{ r++;}}
            // if( h[2]==0 ){ if(a[i][j+1]=='.' ){} else{ r++;}}
            // if( h[3]==0) {if( a[i][j-1]=='.' ){} else{ r++;}  }
//printf("  check =  k= %d s=%d r= %d i %d  j%d\n",k,s,r,i,j);




            if( 2> 4-(s+r) ){ a[i][j]='X' ;z++;
            printf("k= %d s=%d r= %d i %d  j%d\n",k,s,r,i,j);
             u=1;

            }
                }
                  }
                  if(u==1){ break ;}
        }
        if(u==1){ break ;}

     }
    // if(z>2*k){  break ;}
     }


     for(i=0;i<n;i++){


        for(j=0;j<m;j++){

            printf("%c",a[i][j]);


        }
        printf("\n");
     }
    return 0;
}
