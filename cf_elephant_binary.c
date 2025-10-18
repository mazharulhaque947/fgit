#include<stdio.h>

int main()
{
    int i,j,k,n,l;
    char a[100];
    k=l=0;
    scanf("%s",a);
    n=strlen(a);
      j=0;
      if(a[0]=='0'){ j=1;}
    for(i=j;i<n;i++)
    {   if(j==1){printf("%c",a[i]);  }

        else {


                if(a[i]=='0'){l++;}
        else if(a[i]=='1'){ k++;}
        if(k>=1&& l==1  ){ l=l+1; }
        else if(n==k){  }
        else{ printf("%c",a[i]);}


        }


    }

    return 0;
}
