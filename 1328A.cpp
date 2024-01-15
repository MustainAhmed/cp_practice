#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    vector<int>v;

    while(n!=0)
          {
              cin>>a>>b;

                if(a%b==0){
                    v.push_back(0);
                }

                else{
                    v.push_back(b-(a%b));
                }
            n--;
          }

    for(auto d:v)
{

    cout<<d<<endl;
}

return 0;
}
