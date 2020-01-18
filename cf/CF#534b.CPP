#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    string s;
    cin>>s;
    stack<char>st;
    int a=0;
    st.push(s[0]);
    for(int i=1;s[i]!='\0';i++)
    {
        if(!st.empty()&&s[i]==st.top())
            st.pop(),a++;
        else{
            if(!st.empty()&&st.top()==s[i])
                st.pop(),a++;
            else
                st.push(s[i]);
        }
    }
    if(a&1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
