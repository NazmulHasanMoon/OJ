#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,l;
    char x,y;
    cin>>n;
    stack<char>st;
    cin.ignore();
    while(n--)
    {
        string s;
        s.clear();
        getline(cin,s);
        l=s.size();
        i=0;
        while(i<l)
        {
            y=s[i];
            if(y=='('||y=='[')
                st.push(y);
            else if(y==')'){
                if(st.empty()||st.top()!='('){
                    st.push('=');
                    break;
                }
                st.pop();
            }
            else if(y==']')
            {
                if(st.empty()||st.top()!='[')
                {
                    st.push('=');
                    break;
                }
                st.pop();
            }
            i++;
        }
        if(!st.empty())
            cout<<"No\n";
        else
            cout<<"Yes\n";
        while(!st.empty())
            st.pop();
    }
    return 0;
}
