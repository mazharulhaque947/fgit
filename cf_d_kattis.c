#include<stdio.h>
#include<string.h>
int main()
{
    char r[11][7][6]={{"xxxxx","x...x","x...x","x...x","x...x","x...x","xxxxx"}, //0
                      {"....x","....x","....x","....x","....x","....x","....x"}, //1
                      {"xxxxx","....x","....x","xxxxx","x....","x....","xxxxx"}, //2
                      {"xxxxx","....x","....x","xxxxx","....x","....x","xxxxx"}, //3
                      {"x...x","x...x","x...x","xxxxx","....x","....x","....x"}, //4
                      {"xxxxx","x....","x....","xxxxx","....x","....x","xxxxx"}, //5
                      {"xxxxx","x....","x....","xxxxx","x...x","x...x","xxxxx"}, //6
                      {"xxxxx","....x","....x","....x","....x","....x","....x"}, //7
                      {"xxxxx","x...x","x...x","xxxxx","x...x","x...x","xxxxx"}, //8
                      {"xxxxx","x...x","x...x","xxxxx","....x","....x","xxxxx"}, //9
                      {".....","..x..","..x..","xxxxx","..x..","..x..","....."}  //+
    };

    int i,j,k,l,m,n,p,z;
    for(i=0;i<11;i++) {
        for(j=0;j<7;j++) {
            for(k=0;k<5;k++) {
                // printf("%c",r[i][j][k]); printf("\n");
            }
        }
    }

    char q[7][1000];
    int y[100];

    for(i=0;i<7;i++) {
        scanf("%s",q[i]);
    }

    for(j=0;j<7;j++) {
        for(k=0;k<5;k++) {
            // printf("%c  %d %d %d",q[j][k+(0*5)],j,k,k);
            // C++
            // if(r[p][j][k]==q[j][k+(i*5)]){} else{m==1;break ;}
        }
    }

    // printf(“\n”);

    // printf(“%c”,r[1][0][0]);
    n=strlen(q[0]);
    // printf(“\n\n n==%d nnnn”,n);
    n=strlen(q[0]);
    p=0;
    for(i=0;i<((n+1)/6);i++) {
        m=0;
        p=0;
        for(p=0;p<11;p++) {
            m=0;
            for(j=0;j<7;j++) {
                for(k=0;k<5;k++) {
                    // printf("r=%c q=%c   p=%d j=%d k=%d i=%d",r[p][j][k],q[j][k+(i*5)],p,j,k,i);
                    // printf("%c %c ",r[p][j][k],q[j][k+(i*5)]);
                    // printf("\n");
                    if(r[p][j][k]==q[j][k+(i*6)]) { } else { m=1;

                    // printf("\n breakong \n");


                    break ; }
                }
                if(m==1){ break ; }
            }
            // C++
            // if(m==1){ break ;}
            // printf(“\n”);

             if(m==0) {

                   // printf("\n takiakong value %d \n",p);
             break; }

        //else { p=p+1; }

        }
      y[i]=p;
    }
//printf("okkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk");
    // if(m==0){y[i]=p;}
    // if(m==0){break ;}

    int as[100],bs[100];
    int st=0;
    // for(i=0;i<n/5;i++){ m=0; if(m==0){if(y[i]!=10){as[i]=y[i];} else if(y[i]==10){ m=1;st=i;}}
    for(i=0;i<((n+1)/6);i++) { as[i]=y[i];

   // printf(" yyy= %d ",y[i]);

     if(y[i]==10) { st=i; } }
    // if(m==1){bs[i-st-1]=y[i];} }

    // for(i=m+1;i<n/5;i++){bs[-m-1+i]=y[i+m+1];}
    // for(i=0;i<n/5;i++){ printf(“%d %d %d \n”,i,as[i]),bs[i] ;}

    int sa,sb;
    sa=sb=0;
    for(i=0;i<st;i++) { sa=sa*10+as[i]; }
    for(i=st+1;i<((1+n)/6);i++) { sb=sb*10+as[i]; }
   // printf("   %d  %d  %d\n",sa,sb,sa+sb);
    // while(1){ m=0; }
int ss[100],cc,zz;
cc=0;
zz=sb+sa;
//zz=123467895;

//  only this is the answer ...>
while(zz>0){ ss[cc]=zz%10; zz=zz/10;  cc=cc+1; }
//printf("\n");
for(j=0;j<7;j++){

    for(i=cc-1;i>=0;i--){

        for(k=0;k<5;k++){   printf("%c",r[ss[i]][j][k]);}

 if( i>0){printf(".");}

    }
    printf("\n");


}

    return 0;
}
