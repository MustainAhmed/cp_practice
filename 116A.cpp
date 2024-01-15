#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,p=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p=p-a+b;
        if(p>m){
            m=p;
        }
    }

    cout<<m;
}
