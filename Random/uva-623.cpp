#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,temp,x,carry,j;
    vector<int>st[1003];
    carry=0;
    st[0].push_back(1);
    st[1].push_back(1);
    j=1;
    for(int i=2; i<=1000; i++)
    {
        for(int k=0; k<j; k++)
        {
            temp=st[i-1][k]*i+carry;
            st[i].push_back(temp%10);
            carry=temp/10;
        }
        // cout<<carry<<endl;
        while(carry!=0)
        {
            st[i].push_back(carry%10);
            carry/=10;
            j++;
        }
    }
    while(cin>>n)
    {
        cout<<n<<"!\n";
        x=st[n].size();
        for(int i=x-1; i>=0; i--)
            cout<<st[n][i];
        cout<<'\n';
    }
    return 0;
}
