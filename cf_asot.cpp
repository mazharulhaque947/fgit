#include<bits/stdc++.h>
#define fa_io ios_base::sync_with_stdio(0);cin.tie();cout.tie()
using namespace std;

void mai()
{
    int i,j,k,l,m,n,p[10][26],q[10][26],r,ha[26],hb[26],x,y;
    char a[100],b[100];
      cin>>n>>k;
      scanf("%s",a);
      scanf("%s",b);
      for(i=0;i<n;i++){ for(j=0;j<26;j++){ p[i][j]=q[i][j]=0; }  }
   for(i=0;i<n;i++){        if(i==0){p[i][a[i]-97]++; q[i][b[i]-97]++;}

                          else{ for(j=0;j<26;j++){p[i][j]= p[i-1][j]; q[i][j]= q[i-1][j]; }
                          p[i][a[i]-97]++;
                          q[i][b[i]-97]++;}



                          }
     for(i=0;i<n;i++){ for(j=0;j<26;j++){ cout<<i<<" "<<j<<" "<<p[i][j]<< "   "<<q[i][j] <<"\n";} cout<<"\n\n"; }
    while(k--){
       cin>>l>>r;
      for(i=0;i<26;i++){   ha[i]=p[r-1][i]-p[l-1][i];  hb[i]=q[r-1][i]-q[l-1][i]; cout<<"  "<<i<<"  "<<ha[i]<<" "<<hb[i]<<"\n";  }


        x=0;

        for(i=0;i<26;i++){ if(y=0,y=hb[i]-ha[i], y>0 ){ x+=y; }}



       cout<<x<<"\n";

    }





   // return 0;
}
int main()
{
   fa_io;
   int t;
   cin>>t;
   while(t--){
      mai();

   }

    return 0;
}
