#include<bits/stdc++.h>
using namespace std;
int main()
{
    int re,a,b,c,d;
    while(cin>>a>>b>>c>>d){
        if(!a&&!b&&!c&&!d)
            break;
        re=1080;
        if(a<b)
            re+=(360-(b-a)*9);
        else
            re+=(a-b)*9;
        if(b<c)
            re+=(c-b)*9;
        else
            re+=(360-(b-c)*9);
        if(c<d)
            re+=(360-(d-c)*9);
        else
            re+=(c-d)*9;
        cout<<re<<endl;
    }
    return 0;
}
