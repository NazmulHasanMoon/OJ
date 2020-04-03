#include<bits/stdc++.h>
using namespace std;
double dp[101];
int main()
{
    double m,p,l,per;
    int n,x,y,month;
    double sud,car_val,car_loan;
    while(cin>>m>>p>>l>>n)
    {
        month=0;
        if(m<0)
            return 0;
        y=0;
        while(n--)
        {
            cin>>x>>per;
            for(int i=x;i<=100;i++)
                dp[i]=per;
        }
        sud=l/m;
        car_val=(l+p)*(1-dp[0]);
        car_loan=l;
        ///cout<<car_val<<' '<<car_loan<<endl;
        while(car_loan>car_val)
        {
            month++;
            car_val*=(1-dp[month]);
            car_loan-=sud;
        }
        cout<<month<<((month!=1)?" months\n":" month\n");
    }
    return 0;
}
