#include<bits/stdc++.h>
#define ss 5
using namespace std;

int main()
{
    int n,c(0);
    char x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        if(x=='X')
        {
            if(y=='+')
                c++;
            else
                c--;
        }
        else
        {
            if(x=='+')
                ++c;
            else
                --c;
        }
    }
    cout<<c<<endl;
    return 0;
}
