#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x(1);
    char s[102];
    cin>>n>>s;
    map<string,int>st;
    st.clear();
    int z=n/2;
    for(int i=z; i>=0; i--)
    {
        for(int k=0; k<n;k++)
        {
            string y;
            y.clear();
            int w=k+i;
            for(int j=k; j<w; j++)
                y.push_back(s[j]);
            if(st.find(y)!=st.end())
                x=max(x,i);//cout<<y<<endl;
            else
                st[y]=1;//y.clear();
        }
    }
    cout<<x<<endl;
    cout<<(n-x+1)<<endl;
    return 0;
}
