#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,l=s.size();
    for(i=0;s[i]!='A';i++);
    for(j=l-1;s[j]!='Z';j--);
    cout<<j-i+1<<endl;
    return 0;
}
