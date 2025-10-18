#include<bits/stdc++.h>

using namespace std;

int main()
{    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int a[1000],b[1000],i,j,k,l,n,m,x[500],y[500],c[100][100],p,o,h,g;
    char d[5001];

    cin>>n>>m>>k;

    for(i=0;i<n;i++){  for(j=0;j<m;j++){ cin>>c[i][j]; } }
    for(i=0;i<k;i++){ cin>>d[i]>>x[i]>>y[i];}

    for(i=0;i<n;i++){ a[i]=i; }
    for(i=0;i<m;i++){ b[i]=i; }

    for(i=0;i<k;i++)
    {

        if(d[i]=='g'){
            o=p=0;
          //  cout<<"we need i xi yi "<< i<<"  "<< x[i]<<" " <<y[i]<<"\n";
            for(j=0;j<n;j++){
                   // cout<< j<<" " <<a[j]<<"\n";
                    if(a[j]==x[i]-1  ){ //cout<<"   founf the value a  p"<<j ;

                     p=j; break; }
            }

             for(j=0;j<m;j++){
                   // cout<< j<<" "<<b[j]<<"\n";
                    if(b[j]==y[i]-1  ){ //cout<<"   founf the value b  o "<<j ;
                    o=j; break; }
            }


         //  cout<<p<<o;
           cout<<c[p][o]<<"\n";

        }
        else if(d[i]=='r'){
            o=p=0;
           // cout<< "  we need to swap row n RRRRRRRRRRRRRRRr "<< i<<"  "  << x[i]<<" " <<y[i]<<"\n";
            //cout<<"   before swap row \n";
           // for(j=0;j<n;j++){  cout<<j<<"  "<<a[j]<<"\n"; }
            //cout<<"   before swap column \n";
          //  for(j=0;j<m;j++){  cout<<j<<"  "<<b[j]<<"\n"; }

            for(j=0;j<n;j++){
                    g=h=0;
               // cout<<j<< a[j]<<"\n";

                if(x[i]-1==a[j]){ //cout<<" found "<<j ;
                p=j;h++; }
                if(y[i]-1==a[j]){// cout<<" found "<<j ;
                 o=j;g++; }
                 //if(x[j]-1==a[i]){ cout<<" found "<<j ; p=j;j++; }
                 if(g>0&&h>0){ break ;}
            }
           // cout<< " swap at"<<p,o<<a[p]<<a[o];
            a[p]=y[i]-1;
          //  a[p]=a[o];
            a[o]=x[i]-1;
            // cout<< " swap after "<<p,o<<a[p]<<a[o];

           // cout<<"  after swap row \n";
          //  for(j=0;j<n;j++){  cout<<j<<"  "<<a[j]<<"\n"; }
          //  cout<<"   after swap column \n";
          //  for(j=0;j<m;j++){  cout<<j<<"  "<<b[j]<<"\n"; }

        }
        else if(d[i]=='c')
        {
            o=p=0;
           // cout<< "  we need to swap column m CCCCCCCCCCCCCCCCc "<< i<<"  "  << x[i]<<" " <<y[i]<<"\n";
           // cout<<"   before swap row \n";
           // for(j=0;j<n;j++){  cout<<j<<"  "<<a[j]<<"\n"; }
            //cout<<"   before swap column \n";
           // for(j=0;j<m;j++){  cout<<j<<"  "<<b[j]<<"\n"; }

            for(j=0;j<m;j++){
                    g=h=0;
                //cout<<j<< b[j]<<"\n";

                if(x[i]-1==b[j]){// cout<<" found "<<j ;

                p=j; h++;}
                if(y[i]-1==b[j]){// cout<<" found "<<j ;

                o=j;g++; }
                 //if(x[j]-1==a[i]){ cout<<" found "<<j ; p=j;j++; }
                  if(g>0&&h>0){ break ;}
            }
           // cout<< " swap at"<<p,o<<b[p]<<b[o];
            b[p]=y[i]-1;
          //  a[p]=a[o];
            b[o]=x[i]-1;
            // cout<< " swap after "<<p,o<<b[p]<<b[o];

          //  cout<<"  after swap row \n";
            //for(j=0;j<n;j++){  cout<<j<<"  "<<a[j]<<"\n"; }
          //  cout<<"   after swap column \n";
           // for(j=0;j<m;j++){  cout<<j<<"  "<<b[j]<<"\n"; }



        }



    }


    return 0;

}
