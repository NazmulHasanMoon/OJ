#include<bits/stdc++.h>
using namespace std;
int bin_search(int x,int i,int j,int *a)
{
    int m;
    if(i>j)return -1;
    m=(i+j)/2;
    if(a[m]<x)return bin_search(x,m+1,j,a);
    if(a[m]>x)return bin_search(x,i,m-1,a);
    return m;

}
int main()
{
    int q,n,x,arr[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    cin>>q;
    while(q--){
        cin>>x;
        int ans=bin_search(x,1,n,arr);
        if(ans>0)
            cout<<ans-1<<endl;
        else
            cout<<"not found"<<endl;
    }
    return 0;
}

