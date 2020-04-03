#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    map<long long,long long>mp;
    vector<long long>v;
    while(getline(cin,s))
    {
        stringstream st(s);
        long long n;
        while(st>>n){
            cout<<n;
            if(!mp[n])
                v.push_back(n);
            mp[n]++;
        }

    }
    vector<long long>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<' '<<mp[*it]<<endl;
    }
    return 0;
}
