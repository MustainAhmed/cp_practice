#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,t=0,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=t){
            c++;
            t=a;
        }
    }

    cout<<c;
}
