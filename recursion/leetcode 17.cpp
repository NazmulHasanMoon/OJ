#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>ans;
    string get(int x)
    {
        string z[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        return z[x];
    }
    void permu(int a[],int i,int n,string res){
        if(i==n)
        {
            //res[i]='\0';
            ///cout<<res<<"!";
            ans.push_back(res);
            return;
        }
        string y=get(a[i]);
        cout<<y<<endl;
        for(int j=0;j<y.size();j++){
            res[i]=y[j];
            cout<<res[i]<<endl;
            permu(a,i+1,n,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        stringstream s(digits);
        int a[digits.size()];
        int x;
        s>>x;
        int index=digits.size();
        int idx=index-1;
        while(x!=0)
        {
            a[idx--]=x%10;
            x/=10;
        }
        string res="";
        permu(a,0,index,res);
        return ans;
    }
};
