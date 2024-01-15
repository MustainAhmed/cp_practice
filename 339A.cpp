#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){

        for(int j=0;j<s.size();j++){
    if(s[j]=='+'){
        continue;
    }

      if(s[j]>s[j+2]){
        swap(s[j],s[j+2]);
      }
    }
    }

    cout<<s;
}
