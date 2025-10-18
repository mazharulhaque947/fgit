#include<stdio.h>

int main()
{
     int n,m,b,p,q,i,j,a[1000];
    scanf("%d",&n);
    scanf("%d",&b);
    scanf("%d",&p);
    for(i=0;i<n;i++){ scanf("%d",&a[i]); }
    q=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==2){ if(p>0){p--;} else if(b>0){b--;}else{q++;} }
        else if(a[i]==1){  if(b>0){b--;} else{q++;}    }
    }
    printf("%d\n",q);

    return 0;;
}
