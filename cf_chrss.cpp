#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,a,b,h[11],k,t;
    scanf("%d",&t);
    while(t--){
    char w[12];
    scanf("%d %d %d",&n,&a,&b);
    scanf("%s",w);
    k=0;
    m=j=0;
    for(i=0;i<1000;i++){
            if(m==a&&j==b){ k=1; break ;}
            if(w[i%n]=='N'){ j++;; }
            else  if(w[i%n]=='E'){ m++; }
            else  if(w[i%n]=='S'){ j--; }
            else  if(w[i%n]=='W'){ m--;; }
    }
    if(k==1){ printf("YES\n");}
    else{ cout<<"NO"<<"\n"; }
    }
    return 0;
}
