#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int>v;
    int x[n];
    for(int i=0; i<n; i++)
    {
        cin>>k;
        if(k==0)
            v.push_back(i);
    }
    if(!v.empty())
    {
        for(int j=0; j<v.size(); j++)
        {
            int l,y;
            l=1;
           //cout<<"v=="<<v[j]<<endl;
            x[v[j]]=0;
            if(v[j-1])
            {
                y=(v[j]-v[j-1])/2;
                for(int i=v[j]-1; i>=0&&y; i--,y--)
                {
                    x[i]=l++;
                }
            }
            else
            {
                for(int i=v[j]-1;i>=0; i--){
                    if(v[i]!=0)
                        x[i]=l++;
                }
            }
            l=1;
            if(v[j+1])
            {
                y=(v[j+1]-v[j])/2;
                  for(int i=v[j]+1; i<n&&y; i++,y--)
                      x[i]=l++;
            }
            else
            {
                for(int i=v[j]+1; i<n; i++)
                    x[i]=l++;
            }
        }
        for(int i=0; i<n; i++)
            cout<<x[i]<<' ';
    }
    else
        for(int i=0; i<n; i++)
            cout<<"0 ";
    cout<<endl;
    return 0;
}
