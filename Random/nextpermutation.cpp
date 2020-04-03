// Find the next lexicographically greater permutation of a word
#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    string s;
    while(1)
    {
        cin>>s;
        if(s=="#")
            break;
        bool val = next_permutation(s.begin(), s.end());
        if (val == false)
            cout << "No Successor\n";
        else
            cout << s << '\n';
    }
    return 0;
}
