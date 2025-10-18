#include<stdio.h>
#include<string.h>

int main()
{
    int a[126][4],i,j,k,m,n,s,c,l;
    char b[101];
    scanf("%s",b);
    n=0;
    for(i=0;b[i]!='\0';i++){ n++; }

    m=0;
    s=1;
    while( s=m*8,s<1000  )
    {
        c=0;
        while(s>0){ c++; a[m][c]=s%10; s=s/10;} a[m][0]=c; m++;
    }
    a[0][0]=1;
a[0][1]=0;
a[125][0]=3;
a[125][1]=0;
a[125][2]=0;
a[125][3]=0;
    // for(i=0; i<=125; i++){printf("%d  ",i);for( j=a[i][0];j>=1;j--){  printf("  %d  ",a[i][j]); }printf("\n");}
c=0;
     for(i=13;i<=125;i++)
     {
         c=1;
         k=l=0;
         for(j=n-1;j>=0;j--){

            if(a[i][c]==b[j]-'0'){  c++; }
            if(c==4){ k=j; l=i; break; }
         }

        if(c==4){ break ;}
     }

     if(c==4){
printf("YES\n");
       for(i=0;i<k;i++){printf("%c",b[i]);}
        for(i=3;i>=1;i--){ printf("%d",a[l][i]);}

     }
     else{ c=0;

         for(i=2;i<=12;i++)
     {
         c=1;
         k=l=0;
         for(j=n-1;j>=0;j--){

            if(a[i][c]==b[j]-'0'){  c++; }
            if(c==3){ k=j; l=i; break; }
         }

        if(c==3){ break ;}
     }

       if(c==3){ printf("YES\n");c=10; for(i=2;i>=1;i--){  printf("%d",a[l][i]);} }
if(c!=10){
        for(i=0;i<=1;i++)
     {
         c=1;
         k=l=0;
         for(j=n-1;j>=0;j--){

            if(a[i][c]==b[j]-'0'){  c++; }
            if(c==2){ k=j; l=i; break; }
         }

        if(c==2){ break ;}
     }

       if(c==2){ printf("YES\n"); for(i=1;i>=1;i--){c=1; printf("%d",a[l][i]);} }
      else if(1){ printf("NO\n");  }

     }
     }

    return 0;
}

