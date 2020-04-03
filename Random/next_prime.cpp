#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool IsPrime(long long number)
{

    if (number == 2 || number == 3)
        return true;

    if (number % 2 == 0 || number % 3 == 0)
        return false;

    long long divisor =6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {
cout<<divisor<<endl;
        if (number % (divisor - 1) == 0)
            return false;

        if (number % (divisor + 1) == 0)
            return false;

        divisor += 6;

    }
cout<<divisor<<"!\n";
    return true;

}

long long NextPrime(long long a)
{

    while (1)
    {
         if(!IsPrime(a))
            a++;
         else
            return a;
    }
}
int main()
{
    faster
long long n;
    cin>>n;
    long long x=NextPrime(n);
    if(x==n)
        cout<<"yes\n";
    else
        cout<<"no\n"<<x<<'\n';
    return 0;
}
