#include<stdio.h>

int main()
{
int t,a,b,c,f,i,j,k;
scanf("%d",&t);
while(t--){

scanf("%d %d %d",&a,&b,&c);

while((c-b)%a!=0){ c--;}


printf("%d\n",c);

}

return 0;
}
