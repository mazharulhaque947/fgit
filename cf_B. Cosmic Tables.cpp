#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000],b[1000],i,j,k,n,m,q,x,y,l,qx[5000],qy[5000],d[10][10];
    char qc[5000];
    cin>>n>>m>>k;
    cout<<k;
    for(i=0;i<n;i++){ for(j=0;j<m;j++){ scanf("%d",&d[i][j]); } }
    for(i=0;i<k;i++){ scanf(" %c %d %d",&qc[i],&qx[i],&qy[i]); }
    for(i=0;i<n;i++){ a[i]=i; }

    for(i=0;i<m;i++){ b[i]=i; }
    for(i=0;i<k;i++){ printf(" %c %d %d \n",qc[i],qx[i],qy[i]); }
    for(i=0;i<k;i++){

       if(qc[i]=='g'){ x=0;y=0;   for(j=0;j<n;j++){ printf("num=%d j=%d i=%d qx=%d qy=%d \n",b[j],j,i,qx[i],qy[i]);
       if(b[j]==qx[i]-1){ x=j; } if(b[j]==qy[i]-1){ y=j; }} printf("x=%d  y=%d %d\n",x,y,d[x][y]);     }


       else  if(qc[i]=='r'){        x=0;y=0;
                     cout<< "  innn rrrrrr \n";
           for(j=0;j<n;j++){ printf("n=j=%d  valx =%d\n",j,a[j]) ;}
           for(j=0;j<n;j++){ printf("m=j=%d  valy =%d\n",j,b[j]) ;}

        for(j=0;j<n;j++){ if(b[j]==qy[i]-1 && y==0){ b[j]==qx[i]-1;  j++;y++;cout<<"just changed"; }

         if(b[j]==qx[i]-1 && x==0){ b[j]==qy[i]-1; j++;x++; cout<<"just changed"; } if(x==1&&y==1){ break;}  }

         for(j=0;j<n;j++){ printf("n=j=%d  valx =%d\n",j,a[j]) ;}
           for(j=0;j<n;j++){ printf("m=j=%d  valy =%d\n",j,b[j]) ;}


          }


       else if(qc[i]=='c') {
                     cout<<" innnn cccccccc \n";
      for(j=0;j<n;j++){ printf("n=j=%d  valx =%d\n",j,a[j]) ;}
           for(j=0;j<n;j++){ printf("m=j=%d  valy =%d\n",j,b[j]) ;}

         x=0;y=0;

        for(j=0;j<n;j++){ if(a[j]==qy[i]-1 && y==0){ a[j]==qx[i]-1;  j++;y++; cout<<"just changed";}

         if(a[j]==qx[i]-1 && x==0){ a[j]==qy[i]-1; j++;x++; cout<<"just changed"; } if(x==1&&y==1){ break;}  }

          for(j=0;j<n;j++){ printf("n=j=%d  valx =%d\n",j,a[j]) ;}
           for(j=0;j<n;j++){ printf("m=j=%d  valy =%d\n",j,b[j]) ;}

       }

    }


    return 0;
}
