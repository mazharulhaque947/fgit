#include<stdio.h>
int c;
int fo(int n,int m,int k)
{
    if(n==m&&k!=1){ k=1;c=1;/* printf("YES\n");*/c=1; return 1;  }
    else if(n%3==0&&k!=1){k= fo((n/3)*2,m,k);  fo(n/3,m,k); }


   // else if(n%3==0&&k!=1){fo((n/3)*2,m,k); }
    else{
   // return 0;
    }
}
int main()

{
    int n,m,i,k;
    scanf("%d",&i);
    while(i--){ scanf("%d %d",&n,&m);c=0; fo(n,m,0); if(c==1){ printf("YES\n");} else{  printf("NO\n");  } }

    return 0;
}
