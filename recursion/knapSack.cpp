#include<bits/stdc++.h>
using namespace std;
int n,cap,cost[100],weight[100];
int profit1,profit2;
int KnapSack(int i,int w)
{
    if(i==n)return 0;
    if(w+weight[i]<=cap){
        return max(cost[i]+KnapSack(i+1,w+weight[i]),KnapSack(i+1,w));
    }
    else
        return KnapSack(i+1,w);
        //cout<<profit1<<' '<<profit2<<'\n'
}
int main()
{
    cin>>cap>>n;
    for(int i=0;i<n;i++)
        cin>>weight[i]>>cost[i];
    cout<<KnapSack(0,0)<<endl;
    return 0;
}
/*10
5
1 120
7 400
4 280
3 150
4 200
*/
