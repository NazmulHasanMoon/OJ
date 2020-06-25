#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i;
    int c(0);
    cin>>n>>x;
    for(i=x;i<=n/2;i++)
    {
        if(n%i==0&&i*x==n)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<i<<endl;
    else
    {
        if(n%x==0)
            cout<<n<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
