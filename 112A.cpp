#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m=0,n=0,i;
    string a,b;
    cin>>a;cin>>b;
    for(i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]+32;
        }
        }
         for(i=0;i<b.size();i++){
        if(b[i]>='A'&&b[i]<='Z'){
            b[i]=b[i]+32;
        }


    }
if (a > b)
        cout << "1" << endl;
    else if (a == b)
        cout << "0" << endl;
    else
        cout << "-1" << endl;

        return 0;
    }

