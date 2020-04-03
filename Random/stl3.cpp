#include<bits/stdc++.h>
using namespace std;
#define ss 200
#define sz 102
char s[ss][sz],c[sz];
int main()
{
    map<string,string>mp;
    int t,x;
    cin>>t;
    getchar();
    for(int i=0;i<t*2;i++){
        cin.getline(s[i],101);
        if(i%2!=0)
            mp[s[i-1]]=s[i];
    }
    int n;
    cin>>n;
   getchar();
    for(int i=0;i<n;i++)
    {
        cin.getline(c,101);

        if(mp.find(c)!=mp.end())
            cout<<mp[c]<<endl;
    }
    return 0;
}

