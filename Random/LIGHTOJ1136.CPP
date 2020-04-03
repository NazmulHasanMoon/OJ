#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x(1),y,a,b;
    cin>>t;
    while(x<=t)
    {
        cin>>a>>b;
        y= ( ((b-1)/3)*2 + (b-1)%3) - (((a-2)/3)*2 + (a-2)%3);
        if(a==1)
            y--;
        cout<<"Case "<<x++<<": "<<y<<endl;
    }
    return 0;
}
