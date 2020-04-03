#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(isdigit(s[i]))
            cout<<s[i];
    }
    return 0;
}
