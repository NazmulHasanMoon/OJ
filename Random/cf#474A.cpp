#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    x=y=z=0;
    string s;
    cin>>s;
    bool t,f;
    t=f=false;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
            x++;
        else if(s[i]=='b'){
            y++;
            if(x&&!t)
                t=true;
        }
        else{
            z++;
            if(y&&!f)
                f=true;
        }
    }
    if((z==x||z==y)&&t&&f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
