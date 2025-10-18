
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k,l,n,p,q,t;
char a[200000];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
k=0;

scanf("%s",a );
//if(a[i]==1){ k++;}

for(i=0;i<n;i++)
{


//if(a[i]==1){ k++;}
k=k+(a[i]-'0');
}
l=0;
p=0;
for(i=0;i<n;i++)
{
if(p==0&&a[i]=='0'){ l++; p=1;}
if(a[i]=='1'){ p=0;}


}
if(l>=k){ printf("NO\n");}
 else{ printf("YES\n");}

}

return 0;
}
