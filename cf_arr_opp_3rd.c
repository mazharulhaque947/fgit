#include<stdio.h>

int main()
{
    int i,j,k,n,m,l,s,z;
    scanf("%d %d",&n,&m);
    int a[n];
    struct d{
       int t;
       int q,r;
       int w;
       int v;

    }h[m];
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}
for(i=0;i<m;i++){ scanf("%d",&h[i].t); scanf("%d",&h[i].q);if(h[i].t==1){scanf("%d",&h[i].r); }}

for(i=0;i<m;i++){


    if(h[i].t==3){
        k=i;
        s=0;
        l=a[h[i].q-1];
        while(k>=0){

            if(h[k].t==2){ s=s+h[k].q;}

            if(h[k].t==1&& h[k].q==h[i].q){ l=h[k].r;  break ;}

            k=k-1;

        }

        printf("%d\n",s+l);


    }


}
    return 0;
}
