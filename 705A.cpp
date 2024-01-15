#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="I hate";
    string b="I love";
    string s;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i==1){
            s=a;
        }
        else if(i%2){
            s=s+" that "+a;
        }
        else{
            s=s+" that "+b;
        }
    }

    cout<<s+" it";
}
