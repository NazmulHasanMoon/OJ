#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,H,W;
    while(cin>>N>>B>>H>>W)
    {
        int temp=1e9;
        int p,w,f,g=0;
        for(int i=0;i<H;i++)
        {
            cin>>p;
            f=0;
            for(int j=0;j<W;j++)
            {
                cin>>w;
                if(w>=N)
                    f=1;
            }
            if(f&&temp>p)
                temp=p,g=1;
        }
        if(g&&temp*N<=B)
            cout<<temp*N<<endl;
        else
            cout<<"stay home\n";
    }
    return 0;
}
