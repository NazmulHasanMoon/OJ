#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;
    vector<int>ind(n+1);
    ///vector<bool>vis(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        ind[arr[i]]=1;
        if(arr[i]>i)
            return cout<<"-1\n",0;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]<arr[i-1])
            return cout<<"-1\n",0;
    }
    x=0;
    arr[0]=arr[1];
    for(int i=1;i<=n;i++){
        if(arr[i]!=arr[i-1])
            cout<<arr[i-1]<<' ';
        else
        {
            while(ind[x]!=0)
                x++;
            ind[x]=1;
            cout<<x<<' ';
        }
    }
    return 0;
}

