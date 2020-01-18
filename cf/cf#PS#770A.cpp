#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,s(240);
    cin>>n>>k;
    for(i=1;i<=n;i++){
        s-=(i*5);
        if(s<k)
            break;
    }
    cout<<i-1<<endl;
    return 0;
}
