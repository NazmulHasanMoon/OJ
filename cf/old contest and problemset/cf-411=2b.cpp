#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[6]="aabb";
    //char ch[6]="caabb";
    for(int i=0,j=0,k=0;i<n;i++)
    {
        cout<<c[j],j++;
        if(j==4)
            j=0;
    }
    cout<<endl;
    return 0;
}
