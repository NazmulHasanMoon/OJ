#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    char c[3],ch[3];
    int i(0),l=st.size();
    int j=1,k,x,y;
    x=y=k=0;
    c[2]='\0';
    while(st[i]!=':')
    {
        c[j]=st[i];
        j--,i++;
    }
    i++;
    while(st[i]!='\0')
    {
        ch[k]=st[i];
        y=y*10+(ch[k]-48);
        k++,i++;
    }
    ch[k]='\0';
    if(strcmp(c,ch)==0)
        cout<<"0\n";
    else
    {
        for(j=0; j<2; j++)
            x=x*10+(c[j]-48);
        if(x==32&&x<y)
            cout<<60-y<<endl;
        else if(x>y)
            cout<<x-y<<endl;

        else
        {
            int z=70-y+x;
            if(x!=0)
                cout<<z<<endl;
            else
                cout<<61-y<<endl;
        }
    }
    //cout<<x<<y<<c<<ch;
    return 0;
}
