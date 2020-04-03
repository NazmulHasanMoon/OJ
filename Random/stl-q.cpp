#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        //map<string,int>::iterator it=mp.begin();
        if(mp.find(c)!=mp.end())
            cout<<c<<mp[c]++<<endl;
        else
            mp[c]=1,cout<<"OK\n";
    }
    return 0;
}
