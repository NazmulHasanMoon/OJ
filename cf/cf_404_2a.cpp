#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,re(0);
    string s;
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        re+=mp[s];
    }
    cout<<re<<endl;
    return 0;
}
