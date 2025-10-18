#include<stdio.h>

void maini()
{
   int a,b,i,j;
   scanf("%d %d",&a,&b);
   j=0;
   while(a>0){  a=a/b;b++;j++; }
    printf("%d\n",j);
  //  return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){ maini(); }

    return 0;
}
