#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
#define sz 10002
using namespace std;
char c[sz],ch[sz];
int main()
{
    int n,x,x1,y,y1;
    x=x1=y=y1=0;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
        getchar();
        if(c[i]=='1')
            x++;
        else
            y++;
        scanf("%c",&ch[i]);
        getchar();
        if(ch[i]=='1')
            x1++;
        else
            y1++;
    }
    if(x>x1)
    {
        if(y1==0)
        {
            if(x>y)
                cout<<y<<endl;
            else
                cout<<x<<endl;
        }
        else
            cout<<x1+y<<endl;
    }
    else if(x1>x){
        if(y1==0)
        {
            if(x>y)
                cout<<y<<endl;
            else
                cout<<x<<endl;
        }
        else
            cout<<x+y1<<endl;
    }
    else if((x1==y1==0)&&(x==y==n))
        cout<<"0\n";
    else
    {
        if(x>y)
            cout<<y1+y<<endl;
        else
            cout<<x+x1<<endl;
    }
    return 0;
}
