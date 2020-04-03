#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,w,x,y,s,c,i;
    cin>>m>>w;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        x=31;
    else if(m==2)
        x=28;
    else
        x=30;
    y=(x%7)+(w-1);
    s=x/7;
    c=7;
    if(y!=0)
        i=1;
    else
        i=0;
    while(c<y)
    {
        c*=i;
        if(c>=y)
            break;
        i++;
    }
    cout<<s+i<<endl;
    return 0;
}

