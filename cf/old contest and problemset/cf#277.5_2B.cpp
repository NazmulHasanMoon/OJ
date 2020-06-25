#include<bits/stdc++.h>
using namespace std;
#define sz 102
int a[sz],b[sz],n,m,c;
set<int>s;
int main()
{
    cin>>n;
    int k(0);
    for(int i=0;i<n;i++)
        cin>>a[i];//s.insert(a[i]);
    sort(a,a+n);
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];//s.insert(b[i]);
    sort(b,b+m);
    int x;
    //set<int>::iterator it;
    for(int i=0,j=0;i<n&&j<m;)
    {
        x=a[i]-b[j];
        if(abs(x)<=1)
        {
            c++;
            j++;
            i++;
        }
        else if(x>1)
            j++;
        else
            i++;

    }
    cout<<c<<endl;
    return 0;
}
