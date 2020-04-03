#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        char x;
        cin>>n>>m;
        //cout<<n<<m<<"whgfdsgfe"<<endl;;
        int cnt(0),cnt1(0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                cin>>x;
                //cout<<x<<endl;
                if((i==0||j==0||i==n-1||j==m-1)&&x=='0')
                    cnt++;
                else if(i!=0&&j!=0&&i!=n-1&&j!=m-1&&x=='1')
                    cnt1++;
            }
        }
        if(cnt1<cnt)
            cout<<"-1\n";
        else
            cout<<cnt<<'\n';
    }
    return 0;
}

