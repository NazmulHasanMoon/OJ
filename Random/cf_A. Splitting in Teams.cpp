#include<bits/stdc++.h>
using namespace std;
int mp[3];
int main()
{

    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    if(mp[2]>=mp[1])
        cout<<mp[1]<<endl;
    else
    {
        int x=mp[2];
        mp[1]-=x;
        x=x+(mp[1]/3);
        cout<<x<<endl;
    }
    return 0;
}
