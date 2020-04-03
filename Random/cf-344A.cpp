#include<bits/stdc++.h>
using namespace std;
string s,s2;
int main()
{
    int n,c(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s!=s2)
            c++;
        s2=s;
    }
    cout<<c<<endl;
    return 0;
}
