#include <iostream>
#define ll long long
using namespace std;
bool knowbit(ll &n,int i){
    return (n>>i)&1;
}
ll Setbit(ll &n,int i){
    return n|(1<<i);
}
ll Resetbit(ll &n,int i){
    return n&(~(1<<i));
}
ll Resetbit2(ll &n,int i){
    return n&(-1^(1<<i));
}
ll flib (ll n,int i){
    return n^(1<<i);
}
int main()
{
    long long q,n;
    cin>>q>>n;
    long long  query,x;

    while(q--)
    {
        cin>>query;
       if(query==1)
        {
            cin>>x;
            cout<<knowbit(n,x)<<endl;
        }
        else if(query==2)
        {
            cin>>x;
            n=Setbit(n,x);
            cout<<n<<endl;
        }
        else if(query==3)
        {
            cin>>x;
            n=Resetbit(n,x);
            cout<<n<<endl;;
        }
        else if(query==4)
        {
            cin>>x;
            n=flib(n,x);
            cout<<n<<endl;
        }
    }
    return 0;
}
