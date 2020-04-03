#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    string s;
    cin>>t;
    while(t--){
        cin>>a>>s>>b;
        bool ck=false;
        if(s=="<")
        {
            if(a<b)
                ck=true;
        }
        else if(s=="!=")
        {
            if(a!=b)
                ck=true;
        }
        else if(s==">"){
            if(a>b)
                ck=true;
        }
        else if(s=="<=")
         {
             if(a<=b)
                ck=true;
         }
         else if(s==">=")
         {
             if(a>=b)
                ck=true;
         }
         else if(s=="==")
         {
             if(a==b)
                ck=true;
         }
         if(ck)
            cout<<"true\n";
         else
            cout<<"false\n";
    }
    return 0;
}
