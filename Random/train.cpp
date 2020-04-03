#include<bits/stdc++.h>
using namespace std;
#define sz 51
int a[sz],b[sz];
int main()
{
    int l,t;
    cin>>t;
    while(t--)
    {
        cin>>l;
        int cnt(0);
        for(int i=0; i<l; i++)
            cin>>a[i],b[i]=i+1;
        for(int i=1,j=0;; i++)
        {
            while(a[j]==j+1&&j<l)
                j++;
            ///cout<<j<<endl;
            if(j==l)
                break;
            for(int k=j;k<l-1;k++){
                if(a[k]==b[k]){
                    ///cout<<a[k]<<' '<<b[k]<<' '<<k<<endl;
                    break;
                }
                else
                    swap(a[k],a[k+1]),cnt++;///cout<<a[k+1]<<' '<<a[k]<<' '<<k<<' '<<k+1<<endl;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
