#include <iostream>

using namespace std;

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
            n=(n | x);
        }
        else if(query==2)
        {
            cin>>x;
               n=(n & x );
        }
        else if(query==3)
        {
            cin>>x;
          n=  (n ^ x );

        }
        else
        {
            n=~n;
        }
        cout<<n<<endl;
    }
    return 0;
}
