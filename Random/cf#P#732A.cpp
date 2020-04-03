#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,s;
    cin>>n>>k;
    for(i=1;i<=10;i++)
    {
        s=i*n;
        int x=s%10;
        if(x==k||x==0)
            break;

    }
    cout<<i<<endl;
    return 0;
}
