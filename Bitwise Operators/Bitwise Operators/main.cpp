#include <iostream>

using namespace std;
void maxBit(int n,int k)
{
    int maxAnd=0,maxOr=0,maxXor=0;
    for(int a=1;a<n;a++)
    {
        for(int b=a+1;b<=n;b++)
        {
            int andVal=a&b;
            int orVal=a|b;
            int xorVal=a^b;
            if(andVal<k&&maxAnd<andVal)
            {
                maxAnd=andVal;
            }
             if(orVal<k&&maxOr<orVal)
            {
                maxOr=orVal;
            }
             if(xorVal<k&&maxXor<xorVal)
            {
                maxXor=xorVal;
            }
        }
    }
    cout<<maxAnd<<endl;
    cout<<maxOr<<endl;
    cout<<maxXor<<endl;
}

int main()
{
    int n,k;
    cin>>n>>k;
    maxBit(n,k);
    return 0;
}
