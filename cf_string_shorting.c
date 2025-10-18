#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,k,j,n,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        n= strlen(a);
        //for(i=0;i<n-2;i++){ printf("%c",a[i]);}
       // printf("i");
       // printf("\n");
if(n>1){k=0;
       j= 0;
    for(i=1;i<n;i++){if(a[i]==a[i-1]){ k=i; j=1;}}
   // if(a[n-1]==a[n-2]){ printf("1\n");}
//else{ printf("%d\n",n); }
l=n-(k);
if(j==1){
printf("%d\n",1);}

else{ printf("%d\n",n);}
}

else{ printf("%d\n",n);}
    }


    return 0;
}

