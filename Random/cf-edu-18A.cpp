#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    scanf("%d",&n);
    vector<int>v;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it=v.begin();
    int mm,c=1;
    it++;
    mm=*(it)-*(it-1);
    it++;
    for(;it!=v.end();it++)
    {
        int x=*(it)-*(it-1);
        if(x==mm)
            c++;
        else if(x<mm){
            mm=x;
            c=1;
        }
    }
    cout<<mm<<' '<<c<<endl;
    return 0;
}
