#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string>v;
    string s;
    void result(string S,int i,int len)
    {
        if(i==len)
        {
            v.push_back(S);
            return;
        }
        if(i<len)
        {
            if(S[i]>='a'&&S[i]<='z')
                S[i]=toupper(S[i]);
            result(S,i+1,len);
            if(isalpha(S[i]))
            {
                S[i]=tolower(S[i]);
                ///cout<<S<<' '<<i<<'-'<<v.size()<<endl;
                result(S,i+1,len);
            }
        }
        else if(S[i]>='A'&&S[i]<='Z')
        {
            S[i]=tolower(S[i]);
            result(S,i+1,len);
            if(isalpha(S[i]))
            {
                S[i]=toupper(S[i]);
                result(S,i+1,len);
            }
        }
        else
            result(S,i+1,len);
    }
    vector<string> letterCasePermutation(string S)
    {
        v.clear();
        ///s.clear();
        result(S,0,S.size());
        return v;
    }
};
int main()
{
    Solution v;
    string S;
    cin>>S;
    vector<string>re;
    re=v.letterCasePermutation(S);///<<endl;
    for(auto i:re)
        cout<<i<<'\n';
    return 0;
}
