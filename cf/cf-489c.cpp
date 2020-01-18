#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,x(0);
    cin>>m>>s;
    vector<int>v;
    v.push_back(0);
    for(int i=9; i>=0; i++)
    {
        if(x+i<=s)
            x+=i;
    }

    return 0;
}
