#include<stdio.h>

int main()
{
    int n,i,j,k,a[100];
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++){  scanf("%d",&a[i]); if(a[i]==0) {k=k+1;  } }
    i=0;
    while((9*(i+1))<=(n-k)){ i=i+1;}
    i=i*9;
    if(k!=0){ while(i--){printf("%d",5);}while(k--) {printf("0");} printf("\n");}
    else{ printf("-1\n");}
    return 0;
}
