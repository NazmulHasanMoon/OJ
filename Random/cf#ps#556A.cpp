#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n>>s;
    int x,y;
    x=y=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0')
            x++;
        else
            y++;
    }
    cout<<abs(y-x)<<endl;
    return 0;
}
