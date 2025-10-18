#include<stdio.h>

int main()
{  int i,j,k,l,n,m,a[50],b[50],o,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){ scanf("%d %d",&a[i],&b[i]); }


    o=0;
    p=0;
    for(i=0;i<n-1;i++){p=o=i;
    for(j=i+1;j<n;j++){



            if(a[j]>a[p]){o= p=j;} else if(a[p]==a[j]&& b[j]<b[o]){p=o=j;} }

    l=a[p]; m=b[o]; a[p]=a[i]; b[o]=b[i];a[i]=l; b[i]=m;  }
    p=a[k-1];
    o=b[k-1];
    m=0;
    for(i=0;i<n;i++){ if(a[i]==p&&o==b[i]){ m+=1;}
    printf("%d %d\n",a[i],b[i]);
    }
    printf("%d\n",m);
    return 0;
}
