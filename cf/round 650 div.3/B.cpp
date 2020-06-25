#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,a,b,c,d;
    cin>>t;
    string s,ans;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        a=b=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if((v[i]&1)&&!(i&1))
                a++;
            else if(!(v[i]&1)&&(i&1))
                b++;
        }
        if(a!=b)
        {
            cout<<"-1\n";
            continue;
        }
        cout<<a<<'\n';
    }
    return 0;
}



