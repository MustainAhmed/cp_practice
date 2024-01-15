#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,b=0,c=0;
    cin>>n;
    int a[n][3];

   for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

     for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            b=b+a[i][j];
        }
        if(b>1){
            c++;
        }
        b=0;
    }


    cout<<c;
}
