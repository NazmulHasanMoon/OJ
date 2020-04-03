#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

#define sc scanf
#define pf printf
#define sz 10000

int main() {

    int i,n;
    int A[sz],B[sz];
    sc("%d",&n);
    vector<int>v(2*n);
    for(i=0; i<n; i++) sc("%d %d",&A[i],&B[i]);
    sort(A,A+n);
    sort(B,B+n);
    merge(A,A+n,B,B+n,v.begin());
    //for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) pf("%d ",*it);
    for(i=0; i<v.size(); i++) pf("%d ",v[i]);
    return 0;
}
