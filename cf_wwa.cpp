#include<bits/stdc++.h>

using namespace std;

int main()
{ int i,k,j,l,m,n,x,y,u[10001];
cin>>x>>y>>m>>n;
//cout<<"yyyyyyyy"<<m<<n;
for(i=0;i<10000;i++){ u[i]=1;}
//cout<<"yyyyyyyy"<<x<<y;
if(x==1){ u[0]=u[0]*5;}
if(y==1){ u[0]=u[0]*5;}
for(i=1;i<10001;i++){     if(i%x==0){ u[i]=u[i]*5;}
if(i%y==0){ u[i]=u[i]*5;}
//cout<<" "<<x<<"     "<<i<<"     "<<y<<   u[i] <<"\n";
}
//cout<<"yyyyyyyy";
l=0;
for(i=m;i<=n;i++){     if( u[i]==25){ l++;}}


cout<<l<<"\n";

    return 0;
}
