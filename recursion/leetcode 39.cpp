#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>res;
    vector<int>x;
    void solve(int target,int sum,int i,int l)
    {
        if(sum==target)
        {
            ///sort(res.begin(),res.end());
            ans.push_back(res);
            return;
        }
        if((i==l)||(sum>target&&i<l))
            return ;
        res.push_back(x[i]);
        solve(target,sum+x[i],i,l);
        res.pop_back();
        solve(target,sum,i+1,l);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        res.clear();
        int l=candidates.size();
        vector<int>::iterator it;
        for(it=candidates.begin();it!=candidates.end();it++)
            x.push_back(*it);
        solve(target,0,0,l);
        return ans;
    }
};
int main()
{
    Solution xx;
    vector<int>candidates;
    int n;
    n=8;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(5);
    //candidates.push_back(7);
    vector<vector<int>>v=xx.combinationSum(candidates,n);
    for(auto i: v)
    {
        for(auto j: i)
        {
            cout<<j<<',';
        }
        cout<<endl;
    }
    return 0;
}
