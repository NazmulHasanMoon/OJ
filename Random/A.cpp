#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define sc scanf
#define pf printf
#define sz 100001

int A[sz],l,m,i,n,c;

int main() {

    sc("%d",&n);
    l=INT_MAX;
    m=INT_MIN;
    for(i=0; i<n; i++) {
        sc("%d",&A[i]);
        l=min(l,A[i]);
        m=max(m,A[i]);
    }
    for(i=0; i<n; i++) if(A[i]>l && A[i]<m) c++;
    pf("%d",c);
    return 0;
}
