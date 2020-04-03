#include<bits/stdc++.h>
using namespace std;
#define sf scanf
int main()
{
    char c[]= {'v','<','^','>'};
    char cc,ch;
    int x,i,y(0),z;

    cin>>cc>>ch>>z;
    x=z;
    x=x%4;
    bool t=false;
    if(cc=='v')
        i=0;
    else if(cc=='<')
        i=1;
    else if(cc=='^')
        i=2;
    else if(cc=='>')
        i=3;
    int k=i;
    if(i==3)
        i=0;
    else
        i++;
    if(x!=2)
    {
        for(; i<4; i++)
        {
            y++;

            if(y==x)
                break;
            //cout<<i<<y<<x<<endl;
            if(i==3&&y<x)
                i=-1;
        }
        if(c[i]==ch)
            cout<<"cw\n",t=true;
        //cout<<i<<endl;
        if(!t)
        {
            y=0;
            if(k==0)
                k=3;
            else
                k--;
            for(; k>=0; k--)
            {
                y++;
                if(y==x)
                    break;
                if(k==0&&y<x)
                    k=4;

            }
            if(c[k]==ch)
                cout<<"ccw\n",t=true;
        }

    }
    if(!t)
            cout<<"undefined\n";
    return 0;
}
