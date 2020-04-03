#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int i,int j)
{
    if(i>j)return 1;
    if(!isalpha(s[i]))return palindrome(s,i+1,j);
    if(!isalpha(s[j]))return palindrome(s,i,j-1);
    if(s[i]!=s[j])
        return 0;
    return palindrome(s,i+1,j-1);
}
int main()
{
    string s;
    cin>>s;
    cout<<palindrome(s,0,s.size()-1)<<'\n';
    return 0;
}
