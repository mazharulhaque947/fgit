#include<stdio.h>
#include<string.h>

int main()
{  int i,j,k,l,m,n,a[10][2],t;
  scanf("%d",&t);
  while(t--){
   char b[19];

   scanf("%s",b);
   m=0;
   for(i=0;b[i]!='\0';i++){ if(b[i]!='0'){a[m][0]=((int)b[i]-48); a[m][1]=i;  m++ ;  }  }
   printf("%d\n",m);
    for(i=0;i<m;i++){ printf("%d",a[i][0]); for(j=0;j<(strlen(b)-a[i][1]-1);j++){printf("0");} printf(" ");}
     printf("\n");

    }
    return 0;
}
