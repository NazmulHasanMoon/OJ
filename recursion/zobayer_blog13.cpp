#include<bits/stdc++.h>
using namespace std;
int linear_search(int x,int i,int *a)
{
    if(i==0)return -1;
    if(a[i]==x)return i;
    return linear_search(x,i-1,a);

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
        int ans=linear_search(x,n,arr);
        if(ans>0)
            cout<<ans-1<<endl;
        else
            cout<<"not found"<<endl;
    }
    return 0;
}
