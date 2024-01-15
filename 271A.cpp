#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y,a,b,c,d;
    cin>>n;

    for(;;){
        y=n+1;
        d=y%10;
        y=y/10;
        c=y%10;
        y=y/10;
        b=y%10;
        y=y/10;
        a=y%10;
        y=y/10;

        if(a==b||a==c||a==d||b==c||b==d||c==d){
            n++;
        }
        else{
            cout<<n+1;
            return 0;
        }
    }
}
