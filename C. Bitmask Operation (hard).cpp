#include <iostream>
#define ll long long
using namespace std;
bool knowbit(ll &n,int i)
{
    return (n>>i)&1;
}
ll Setbit(ll &n,int i)
{
    return n|(1<<i);
}
ll Resetbit(ll &n,int i)
{
    return n&(~(1<<i));
}
ll Resetbit2(ll &n,int i)
{
    return n&(-1^(1<<i));
}
ll flib (ll n,int i)
{
    return n^(1<<i);
}
int main()
{
    long long q,n;
    cin>>n>>q;
    long long  query;

    while(q--)
    {
        cin>>query;
        if(query==1)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==0)
                {
                    n=Setbit(n,i);
                    break;
                }
            }
            cout<<n<<endl;
        }
        else if(query==2)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==1)
                {
                    n=Resetbit(n,i);
                    break;
                }

            }
            cout<<n<<endl;
        }
        else if(query==3)
        {
            if(n==0) n=-1;
            else
            {
                for(int i=0; i<32; i++)
                {
                    if(knowbit(n,i)==1)
                    {
                        break;
                    }
                    else
                    {
                        n=Setbit(n,i);
                    }
                }
            }
            cout<<n<<endl;
        }
        else if(query==4)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==0)
                {
                    break;
                }
                else
                {
                    n=Resetbit(n,i);
                }
            }
            cout<<n<<endl;
        }
        else
        {
            if(__builtin_popcount(n)==1)
            {
                cout<<"is power of two"<<endl;
            }
            else
            {
                cout<<"not power of two"<<endl;
            }
        }
    }
    return 0;
}#include <iostream>
#define ll long long
using namespace std;
bool knowbit(ll &n,int i)
{
    return (n>>i)&1;
}
ll Setbit(ll &n,int i)
{
    return n|(1<<i);
}
ll Resetbit(ll &n,int i)
{
    return n&(~(1<<i));
}
ll Resetbit2(ll &n,int i)
{
    return n&(-1^(1<<i));
}
ll flib (ll n,int i)
{
    return n^(1<<i);
}
int main()
{
    long long q,n;
    cin>>n>>q;
    long long  query;

    while(q--)
    {
        cin>>query;
        if(query==1)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==0)
                {
                    n=Setbit(n,i);
                    break;
                }
            }
            cout<<n<<endl;
        }
        else if(query==2)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==1)
                {
                    n=Resetbit(n,i);
                    break;
                }

            }
            cout<<n<<endl;
        }
        else if(query==3)
        {
            if(n==0) n=-1;
            else
            {
                for(int i=0; i<32; i++)
                {
                    if(knowbit(n,i)==1)
                    {
                        break;
                    }
                    else
                    {
                        n=Setbit(n,i);
                    }
                }
            }
            cout<<n<<endl;
        }
        else if(query==4)
        {
            for(int i=0; i<32; i++)
            {
                if(knowbit(n,i)==0)
                {
                    break;
                }
                else
                {
                    n=Resetbit(n,i);
                }
            }
            cout<<n<<endl;
        }
        else
        {
            if(__builtin_popcount(n)==1)
            {
                cout<<"is power of two"<<endl;
            }
            else
            {
                cout<<"not power of two"<<endl;
            }
        }
    }
    return 0;
}
