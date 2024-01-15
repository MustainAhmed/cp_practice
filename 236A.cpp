#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int c=0,k=0;
    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c==0){
            k++;
        }
        c=0;
    }

if(k%2){
    cout<<"IGNORE HIM!";
}
    else{
        cout<<"CHAT WITH HER!";
    }
}
