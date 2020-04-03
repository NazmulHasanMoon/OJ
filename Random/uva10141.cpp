#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,t(0);
    while(cin>>n>>p)
    {
        if(!n&&!p)
            break;
        string c;
        getchar();
        for(int i=0;i<n;i++)
            getline(cin,c);
        string s[p];
        int x[p+1],P(0);
        double y[p+1],price,q;
        price=q=-1.0;
        for(int i=0;i<p;i++)
        {
            getline(cin,s[i]);
            cin>>y[i]>>x[i];
            getchar();
            if(q<x[i]||q==x[i]&&price>y[i]||price==-1.0)
                q=x[i],P=i,price=y[i];
            for(int j=0;j<x[i];j++)
                getline(cin,c);
        }
        if(t)
            cout<<"\n";
        cout<<"RFP #"<<++t<<endl<<s[P]<<endl;

    }
    return 0;
}
