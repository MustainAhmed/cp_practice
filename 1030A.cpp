#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b;
    c=a;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            c[i]='0';
        }
        else{
            c[i]='1';
        }
    }
    cout<<c;
}
