#include<stdio.h>

int main()
{ int a,b,c,d,i,j,k,m,n;

scanf("%d %d %d %d",&a,&b,&c,&d);
if(a==c&&c==d){ printf("%d",a*256); }
else if((a<c&&a<d)||(a==c&&c<d)||(a==d&&d<c)){  printf("%d\n",a*256);  }
 else if( (c<a&&c<d)||(a==c&&c<d)||(c==d&&c<a) ){ a=a-c ;if(a>b){ a=b; }printf("%d\n",c*256+a*32);      }
 else if( (d<a&&d<c)||(a==d&&d<c)||(c==d&&c<a) ){ a=a-d ;if(a>b){ a=b; }printf("%d\n",d*256+a*32);      }
    return 0;
}
