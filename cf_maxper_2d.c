
#iclude<stdio.h>

int main()
{
    int i,j,k,l,m,n,t,s;
    scanf("%d",&t);
    while(t--){


        scanf("%d %d",&n,&m);
        int a[n][m];
        for(i=0;i<n;i++){

            for(j=0;j<m;j++){  scanf("%d",&a[i][j]);}
        }
        s=0;
        for(i=0;i<(n*1);i++){

        for(j=0;j<m;j++){
            s=s+((n*m)-(j+i*(n-1)))*a[][m]
        }

        }

      printf("%d\n");
    }


    return 0;
}
