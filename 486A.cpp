#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0;;

    cin>>n;

    for(long long int i=1;i<=n;i++){
        sum=sum+i*pow(-1,i);
    }

    cout<<sum;
}
