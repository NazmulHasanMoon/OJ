#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sz 50003
deque<char>de;
char c[sz];
bitset<30>bs;
int main()
{
    cin>>c;
    int x,y,z,st,ed;
    x=y=z=st=ed=0;
    bs.reset();
    int i;
    for(i=0; c[i]!='\0'; i++)
    {
        if(bs[c[i]-'a']==1)
        {
            //int z=de.size();
            ///cout<<c[i]<<'-'<<z<<'='<<i<<' ';
            while(de.front()!=c[i])
            {
                if(de.front()!='?')
                    bs.flip(de.front()-'A');//,cout<<bs[de.front()-'A']<<':'<<de.front()<<endl;
                de.pop_front();
                z--;
            }
            de.pop_front();
            de.push_back(c[i]);
        }
        else if(c[i]=='?')
            de.push_back('?'),z++;
        else
            de.push_back(c[i]),bs.flip(c[i]-'A'),z++;
        if(z==26)
        {
            ed=i;
            break;
        }
    }
    //cout<<y<<' '<<z<<endl;
    //y=max(y,z);
    if(z<26)
        cout<<"-1\n";
    else
    {
        st=ed-25;
        int j(0);
        for(int i=0;i<st;i++)
        {
            if(c[i]=='?')
                cout<<'A';
            else
                cout<<c[i];
        }
        queue<char>q;
        for(int i=0;i<26;i++)
        {
            if(bs[i]==0)
                q.push('A'+i);
        }
        //cout<<q.size();
        while(!de.empty())
        {
            if(de.front()=='?')
                cout<<q.front(),q.pop();
            else
                cout<<de.front();
            de.pop_front();
            j++;
            if(j==26)
                break;
        }
        for(int i=ed+1;c[i];i++)
        {
            if(c[i]=='?')
                cout<<'A';
            else
                cout<<c[i];
        }
        cout<<'\n';
    }

    //if(x+y==)
    return 0;
}
