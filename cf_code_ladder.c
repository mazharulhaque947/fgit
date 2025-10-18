
#include<stdio.h>

int main()
{int n,k,i,j,l,o,p,a[20][20],s;
scanf("%d %d",&n,&k);
s=0;
for(i=0;i<n;i++)
{  p=n-k+1;
   o=k-1;
   l=1;
    for(j=0;j<n;j++)
    {

       if(j<o){ a[i][j]= i*(k-1)+j+1 ; }

        else{ a[i][j]= n*n  - (n-i)*(n-k+1) +l ; l++;}

    }


    s=s+a[i][k-1];
}
printf("%d\n",s);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {


        printf("%d ",a[i][j]);

    }

    printf("\n");

}


    return 0;
}
