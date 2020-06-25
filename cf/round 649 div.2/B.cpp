#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 100001
int arr[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,c,d,e,f,x,y,n,j,last;
    cin>>t;
    vector<int>ans;
    while(t--)
    {
        ans.clear();
        cin>>n;
        ///vector<bool>vis(n);
        int mx,mn;
        mx=INT_MIN;
        mn=INT_MAX;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int in=0;
        x=a=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                ans.push_back(arr[i]),last=arr[i];
            if(i+1<n&&last>arr[i+1]){
                x=arr[i+1];
                j=i+2;
                while(j<n&&x>=arr[j])
                    x=min(x,arr[j]),j++;
                ans.push_back(x),last=x;
                i=j-2;
            }
            else if(i+1<n&&last<arr[i+1]){
                x=arr[i+1];
                j=i+2;
                while(j<n&&x<=arr[j])
                    x=max(x,arr[j]),j++;
                ans.push_back(x),last=x;
                i=j-2;
            }
        }
        cout<<ans.size()<<'\n';
        for(auto i: ans)
            cout<<i<<' ';
        cout<<'\n';
    }
    return 0;
}
