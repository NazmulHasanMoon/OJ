#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y,p,q,r,rr;
    double re;
    while(getline(cin,a))
    {
        x=y=p=q=0;
        for(int i=0; a[i]!='\0'; i++)
        {
            if(isupper(a[i]))
                x+=a[i]-'A'+1;
            else if(islower(a[i]))
                x+=a[i]-'a'+1;
        }
        getline(cin,b);
        for(int i=0; b[i]!='\0'; i++)
        {
            if(isupper(b[i]))
                y+=b[i]-'A'+1;
            else if(islower(b[i]))
                y+=b[i]-'a'+1;
        }
        while(x>9)
        {
            p=0;
            while(x!=0)
            {
                p+=x%10;
                x/=10;
            }
            x=p;
        }
        while(y>9)
        {
            q=0;
            while(y!=0)
            {
                q+=y%10;
                y/=10;
            }
            y=q;
        }
        if(x>y)
            swap(x,y);
        re=(x*100.0)/y;
        cout<<setprecision(2)<<fixed<<re<<" %\n";

    }
    return 0;
}
