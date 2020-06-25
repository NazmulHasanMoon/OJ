#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool t;
    t=true;
    for(int j=0,i=s2.size()-1;i>=0;i--,j++){
        if(s2[i]!=s1[j]){
           t=false;
           break;
        }
    }
    if(t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
