#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k,c(1);
    cin>>s>>k;
    int l=s.size();
    if(k>l)
        cout<<"impossible\n";
    else
    {
        map<char,int>mp;
        sort(s.begin(),s.end());
        for(int i=1; i<l; i++)
        {
            if(s[i]!=s[i-1])
                c++;
        }
        if(c>k)
            cout<<"impossible\n";
        else
            cout<<k-c<<endl;
    }
    return 0;
}
