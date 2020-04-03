#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x;
    cin>>x;
    cout<<"Before using scope resolution op x = "<<x<<endl;
    cout<<"After Using scope resolution operator x = "<<::x<<endl;
    return 0;
}
