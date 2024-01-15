#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0,s=0,l=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    int S=*min_element(a+0,a+n);
    int L=*max_element(a,a+n);

    for(int i=0;i<n;i++){
        if(a[i]==L){
            l=i;
            break;
        }
        }


    for(int j=n-1;j>=0;j--){
       if(a[j]==S){
        s=j;
            break;
        }
    }

    if(l>s){
     m=l+n-2-s;
    }
    else
        {m=l+n-1-s;}


   cout<<m<<endl;

    return 0;
}
