#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,flag=1;
    cin>>n;

    cin>>p;
    int a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
    }

    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }

    for(;n>0;n--){
       int c=0;
        for(int i=0;i<p;i++){
            if(a[i]==n){
                c++;
            }
        }
         for(int i=0;i<q;i++){
            if(b[i]==n){
                c++;
            }
        }

        if(c==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }

    }


   cout<<"I become the guy."<<endl;

   return 0;
}
