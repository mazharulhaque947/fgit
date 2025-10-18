#include <stdio.h>
void he(int n){

     int i,j,k,m[10];
    i=0;
    j=0;

    while(n>0){

        k=n%16;
        n=n-k;
        m[i]=k;
        n=n/16;
          i++;



    }
    for(j=i-1;j>=0;j--){
      if(m[j]<=9){
        printf("%c",m[j]+'0');}
        else{

        printf("%c",m[j]+'a'-10);}
    }


}
void bi(int n)
{
    int i,j,k,m[10];
    i=0;
    j=0;

    while(n>0){

        k=n%2;
        n=n-k;
        m[i]=k;
        n=n/2;
          i++;



    }
    for(j=i-1;j>=0;j--){

        printf("%c",m[j]+'0');



    }



}

void de(int n)
{

      int i,j,k,m[10];
    i=0;
    j=0;

   while(n>0){
       k=n%10;
       n=n-k;
       n=n/10;
       m[i]=k;
       i++;




   }
    for(j=i-1;j>=0;j--){

        printf("%c",m[j]+'0');}


}

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n,i,j,k;
    // char a[10][10],b[10][4];
     scanf("%d",&n);
     int v[n];
     char a[n][10],b[n][4];
     for(i=0;i<n;i++){
             v[i]=0;
            scanf("%s",a[i]);
                         scanf("%s",b[i]);

                         if(b[i][0]=='b'){  k=2;}
         else if(b[i][0]=='h'){k=16;}
         else{ k=10;}
         for(j=0;a[i][j]!='\0';j++){

           if(a[i][j]<='9') {

             v[i]=v[i]*k+(a[i][j]-'0');
           }
           else{

             v[i]=v[i]*k+(a[i][j]-'a'+10);
         }
         }
           printf("Case %d:\n",i+1);
          if(b[i][0]=='b'){
              de(v[i]);
              printf(" dec\n");
              he(v[i]);
               printf(" hex\n");
                printf("\n");

          }
         else if(b[i][0]=='h'){

               de(v[i]);
              printf(" dec\n");
              bi(v[i]);
               printf(" bin\n");
                printf("\n");
         }
         else{

               he(v[i]);
              printf(" hex\n");
              bi(v[i]);
               printf(" bin\n");
                printf("\n");

         }






                         }







    return 0;
}
