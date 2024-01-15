#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4],i,c=0,uc=0;
    for(i=0;i<4;i++){
        cin>>a[i];
    }

    for(i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c==0){
            uc++;
        }
        c=0;
    }

  cout<<4-uc;
}
