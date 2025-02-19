#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>s(n);
    int ans=0;
    for(int i=0; i<n; i++) cin>>s[i];
    //complete search
    for(int mask=0; mask<(1<<n); mask++)
    {
        int odd=0,even=0;
        for(int i=0; i<n; i++)
        {
            if (knowbit(mask,i)==1)
            {
                if(s[i]&1)odd++;
                else even++;

            }
        }
        if(even>odd) ans++;

    }
    cout<<ans<<endl;

    return 0;
}
