#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x){
            cout<<"hard\n";return 0;
        }
    }
    cout<<"easy\n";
    return 0;
}
