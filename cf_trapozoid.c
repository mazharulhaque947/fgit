
#include<stdio.h>

int k(const void *a,const void *b){

return (-*(int *)a+*(int *)b);}
int main(){

int l,t,i,j,n,a[100],f,m;
scanf("%d",&t);
while(t--){

    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]);}

    qsort(a,n,4,k);
  //  for(i=0;i<n;i++){ printf("%d ",a[i]);}
    f=0;
    for(i=0;i<n-1;i++){


        if(a[i]==a[i+1]){

           for(j=0;j<n-1;j++){
            for(l=j+1;l<n;l++){
                if(a[j]-a[l]>2*a[i]){ break ;}
                if(a[j]-a[l]<2*a[i]&&j!=i&&j!=i+1&&l!=i&&l!=i+1){  f=1; break ;}

            }

            if(f==1){ break ;}
           }


        }
        if(f==1){ break ; }
    }
    if(f==1){
printf("%d %d %d %d \n",a[j],a[l],a[i],a[i]);}
else{printf("-1\n");}

}
return 0;
}
