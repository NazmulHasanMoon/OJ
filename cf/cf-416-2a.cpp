#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    x=1,y=2;
    int i,j;
    i=1;
    j=0;
    while(i)
    {
        if(!j)
        {
            if(a>=x)
            {
                a-=x;
                x+=2;
                j=1;
            }
            else
            {
                cout<<"Vladik\n";
                return 0;
            }
            //cout<<"a="<<a<<' '<<x<<endl;
        }
        else
        {
            if(b>=y)
            {
                b-=y;
                y+=2;
                j=0;
            }
            else
            {
                cout<<"Valera\n";
                return 0;
            }

            //cout<<"b="<<b<<' '<<y<<endl;
        }
    }
    return 0;
}
