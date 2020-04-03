#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    while(cin>>l&&l)
    {
        cin.ignore();
        char s[l+1];
        int x,y,c,mn=1e9;
        x=y=c=0;
        for(int i=0; i<l; i++)
        {
            cin>>s[i];
            if(s[i]=='Z')
                    mn=0;
            else if(s[i]=='R'){
                x=i+1;
                if(y)
                {
                    c=abs(x-y);
                    if(mn>c)
                        mn=c;
                    y=0;
                }
            }
            else if(s[i]=='D'){
                y=i+1;
                if(x)
                {
                    c=abs(x-y);
                    if(mn>c)
                        mn=c;
                    x=0;
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
