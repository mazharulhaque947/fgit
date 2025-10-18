#include<bits/stdc++.h>


//using namespace std;

int main()
{
    int n,m,i,j,a,b,h[11],k,t;
    scanf("%d",&t);
    while(t--){
    char w[12];
    scanf("%d %d %d",&n,&a,&b);
   // scanf("%s",w);
    k=0;
    m=j=0;
    if(b>a){
       a=a^b;
       b=a^b;
       a=a^b;

    }
    k=(a-b-1)%2;
    if(k==1){ printf("YES\n");}
    else{  printf("NO\n"); }
    }
    return 0;
}


