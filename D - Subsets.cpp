#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
bool knowbit(ll n,int i)
{
    return (n>>i)&1;
}

int main()
{
    vector<vector<int>>ans;
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    //complete search
    for(int mask=0;mask<(1<<n);mask++){
        vector<int>v;
        for(int i=0;i<n;i++){
           if (knowbit(mask,i)==1) {
            v.push_back(s[i]);
        }
        }
        ans.push_back(v);
    }
    sort (ans.begin(),ans.end());
    for(auto it:ans){
        for (auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
