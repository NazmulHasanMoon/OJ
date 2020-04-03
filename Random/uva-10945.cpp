#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,l,y,i;
    bool t;
    string c;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1)
    {
        getline(cin,c);
        vector<char>st;
        st.clear();
        char ch;
        if(c=="DONE")
            break;
        for(i=0,l=0;c[i]!='\0';i++)
        {
            if(c[i]>='A'&&c[i]<='Z')
                c[i]=c[i]-'A'+ 'a';
            if(c[i]>='a'&&c[i]<='z')
                st.push_back(c[i]),l++;
        }
        t=1;
        for(i=0,y=l-1;i<=y;i++,y--)
        {
            if(st[i]!=st[y]){
                t=0;
                break;
            }
        }
        if(t)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }
    return 0;
}
