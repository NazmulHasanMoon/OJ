#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 102
int main()
{
    faster
    long long a,b,c,x,y,z,p,q,re(0);
    cin>>a>>b>>c;
    x=a/3;
    y=b/2;
    z=c/2;
    if(x&&y&&z)
    {
        p=min(x,y);
        q=x;
        if(p==y)q=y;
        p=min(p,z);
        if(p==z)q=z;
        re+=(p*7);
        a-=(p*3),b-=(p*2),c-=(p*2);
        //cout<<q<<endl;
    }
    //cout<<re<<endl;
    if((a>2&&b>=2&&c)||(a>2&&b&&c>=2)||(a>=2&&b>=2&&c>=2))//||(b>=2&&a&&c>=2)||(c>=2&&a&&b>=2))
        re+=6;
    else if((b>=2&&a>=2&&c==1)||(c>=2&&a>=2&&b==1)||(b==1&&c==1&&a>2)||(a==1&&b>=2&&c>=2))
        re+=5;
    else if((a>=2&&b>=2&&!c)||((a==2||b==2||c==2)&&a&&b&&c))
        re+=4;
    else if((a&&b&&c)||(c>=2&&a)||(a>=2&&b))
        re+=3;
    else if((a>=2&&!b&&!c)||(a&&b&&!c)||(b&&c&&!a)||(a&&c&&!b))
        re+=2;//,cout<<re<<endl;
    else if(a||b||c)
        re++;

    cout<<re<<'\n';
    return 0;
}
