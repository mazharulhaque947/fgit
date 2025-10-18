#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n,c;
    char a[100];
    scanf("%s",a);
    n=strlen(a);
    c=0;
   // printf("%d\n",c);
    for(i=0;i<n;i++){ if(a[i]=='^'){ c=i; break ; } }
   // printf("%d\n",c);
    k=0;
    for(i=1;i<n-c;i++){ if(a[i+c]!='='){  k=k+i*(a[i+c]-48);  }  }
    l=0;
    for(i=1;i<=c;i++){   if(a[c-i]!='=') {  l=l+i*(a[c-i]-48);} }
   // printf(" %d %d ",k,l);
    if(l==k){ printf("balence\n"); }
    else if(k>l){ printf("right\n"); }
    else{printf("left\n"); }

    return 0;
}
