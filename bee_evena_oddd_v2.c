
 #include<stdio.h>
int co(const void *a,const void *b)
{
    return (*(int*)a-*(int *)b );
}
int com(const void *a,const void *b)
{
    return (-*(int*)a+*(int *)b );
}
int main()
{
    int a[10000],e[10000],o[10000],i,j,k,l,n,h;

    //scanf("%d",&n);

    n=50;
    l=0;
    k=0;

    for(i=0;i<n;i++){ // scanf("%d",&a[i]);

a[i]=rand()%15;


    if(a[i]%2==0){  e[k]=a[i] ;k=k+1; } else{  o[l]=a[i]; l=l+1; } }

   qsort(e,k,4,co);
   qsort(o,l,4,com);
   // for(i=0;i<k;i++){  for(j=i;j<k;j++){   if(e[i]>e[j]){ h=e[i] ;e[i]=e[j]; e[j]=h; }  }  }

   // for(i=0;i<l;i++){  for(j=i;j<l;j++){   if(o[i]>o[j]){ h=o[i] ;o[i]=o[j]; o[j]=h; }  }  }


     for(i=0;i<k;i++){  printf("%d\n",e[i]); }
    for(i=0;i<l;i++){  printf("%d\n",o[i]); }
    return 0;
}
