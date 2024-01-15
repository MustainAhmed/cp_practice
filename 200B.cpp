#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[n],sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]/100;
        sum=sum+a[i];
    }

    cout<<(float)sum*100/n;
}
