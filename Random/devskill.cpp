#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long int t,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>c;
        string N[c];
        for(long int j=0;j<c;j++)
            cin>>N[j];
        sort(N,N+c);
        for(int j=0;j<c-1;j++)
            cout<<N[j]<<",";
        cout<<N[c-1]<<endl;
    }
    return 0;
}
