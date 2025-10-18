#include<stdio.h>

int main()
{
    int t,j,i,n,a[100],b[100],mx,d[100],k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        //scanf("%d",&mx);
        for(i=0;i<n;i++){ b[i]=0; }
        for(i=0;i<n;i++){ scanf("%d",&a[i]); b[a[i]-1]=b[a[i]-1]+1; }
        j=0;
       // printf("ooo");
       k=0;
        for(i=n-1;i>=0;i--){ if(b[i]!=0){ d[k]=b[i]; k++; } }
       // printf("ooo");
        if(d[k-1]%2==1){ printf("YES\n"); }
        else if((k>1)&&(d[k-2]%2==1&&d[k-1]%2==0)){  printf("YES\n");  }
        else{  printf("NO\n");  }
    }

    return 0;
}
