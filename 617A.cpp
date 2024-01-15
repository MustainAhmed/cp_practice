#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0,i=5;
    cin>>x;

    while(x!=0){

    if(x>=i){
        c=c+x/i;
        x=x%i;
    }
    i--;
    }
    cout<<c;
}
