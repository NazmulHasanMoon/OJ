#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)
            break;
        deque<int>dq;
        for(int i=1;i<=n;i++)
            dq.push_back(i);
        cout<<"Discarded cards:";
        while(dq.size()>1){
            cout<<' '<<dq[0];
            dq.pop_front();
            if(dq.size()>1)
                cout<<",";
            int x=dq[0];
            dq.pop_front();
            dq.push_back(x);
        }
        cout<<"\nRemaining card: "<<dq[0]<<endl;
    }
    return 0;
}
