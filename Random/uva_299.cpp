#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int l,c(0);
        cin>>l;
        int a[l+2];
        for(int i=0;i<l;i++)
            cin>>a[i];
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(a[i]>a[j])
                    swap(a[i],a[j]),c++;
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
    }
    return 0;
}
