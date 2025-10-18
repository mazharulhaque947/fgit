#include<bits/stdc++.h>
#define fa_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void mai()
{
    int i,j,k,l[20],m,n,p[200][26],q[200][26];
    int r[20],ha[26],hb[26],x,y,hc[26],z,g,f,d;
    char a[201],b[201];
      cin>>n>>k;
      scanf("%s",a);
      scanf("%s",b);
      for(i=0;i<n;i++){ for(j=0;j<26;j++){ p[i][j]=q[i][j]=0; }  }
   for(i=0;i<n;i++){        if(i==0){p[i][a[i]-97]++; q[i][b[i]-97]++;}

                          else{ for(j=0;j<26;j++){p[i][j]= p[i-1][j]; q[i][j]= q[i-1][j]; }
                          p[i][a[i]-97]++;
                          q[i][b[i]-97]++;}



                          }
         for(g=0;g<k;g++){ scanf("%d %d",&l[g],&r[g]);//cout<<l[g]<<r[g]<<g;

          }

     //for(i=0;i<n;i++){ for(j=0;j<26;j++){ cout<<i<<" "<<j<<" "<<p[i][j]<< "   "<<q[i][j] <<"\n";} cout<<"\n\n"; }
    for(g=0;g<k;g++){
      // cin>>l>>r;
     // f=l[g];
     // d=r[d];
        for(i=0;i<26;i++){hc[i]=0;// cout<<"ok";
        }

       z=0;
      for(i=0;i<26;i++){ //cout<<"wwww";cout<<l[g]<<r[g]<<g;
       if(l[g]>1) {ha[i] =p[r[g]-1][i]-p[ l[g]-2 ][i];  hb[i]=q[r[g]-1][i]-q[l[g]-2 ][i]; }

                           else{   ha[i]=p[r[g]-1][i];  hb[i]=q[r[g]-1][i]; }

      if(q[r[g]-1][i]>0){ hc[z]=i ;z++; }  //cout<<"  "<<i<<"  "<<ha[i]<<" "<<hb[i]<<"\n";

       }


        x=0;


        for(i=0;i<z;i++){ //cout<<" existing "<<i<<hc[i]<< " ";
                             //  cout<<"bbb";
         if(y=0,y=hb[hc[i]]-ha[hc[i]], y>0 ){ x+=y; }}



       cout<<x<<"\n";

    }





   // return 0;
}
int main()
{
   //fa_io;
   int t;
   cin>>t;
   while(t--){
      mai();

   }

    return 0;
}
