#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(a%b==0)
    {
        cout<<a;
        while(n)
            cout<<0,n--;
    }
    else
    {
        int x,i;
        for(i=0; i<=9; i++)
        {
            x=a*10+i;
            if(x%b==0){
               cout<<x;
               n--;
               while(n)cout<<0,n--;
               return 0;
            }
        }
        cout<<"-1\n";
    }

    return 0;
}
