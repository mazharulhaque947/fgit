
#include<stdio.h>
#include<math.h>

int main()
{int i,u,w;
double m_1,m_2,a,b,c,d,f;
scanf("%lf",&m_1);
scanf("%lf",&m_2);
scanf("%lf",&a);
scanf("%lf",&b);
printf("m1=%llf m2=%llf a=%llf b=%llf\n",m_1,m_2,a,b);

u=0;
i=0;
do
{
  c=((((m_1-m_2)*a)+(2*m_2*b))/(m_1+m_2));
  /*printf("total c=%lf",c);*/
  if(c>0)
  {
      u=u+1;
  }
  d=((((m_2-m_1)*b)+(2*m_1*a))/(m_1+m_2));
i=i+1;
/*printf("total d=%lf",d);*/

  f=fabs(c);
  b=d;
  a=-1*f;
}
while(-1*f<b);
printf("\ntotal=%d",i+u);
printf("\n2 box=%d",i);

printf(" \nwall =%d",u);
    return 0;
}
