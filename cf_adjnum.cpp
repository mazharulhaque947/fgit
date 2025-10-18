#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,m,i,j,a,b,h[11],k,t;
    scanf("%d",&t);
    while(t--){
    char w[12];
    scanf("%d %d",&a,&b);
   // scanf("%s",w);
    k=0;
    m=j=0;
    if(b>a){
     if (a+1==b) { k=1;}

    }
    else{
     m=(a-b+1);
     j=0;
     while(m>9*j){
             j++;
        if(m==9*j){k=1; }


     }

    }
    if(k==1){ cout<<"YES"<<"\n"; }
    else{ cout<<"NO"<<"\n";  }
    }
    return 0;
}


