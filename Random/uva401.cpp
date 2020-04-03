#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,char>mp;
    mp['A']='A';
    mp['E']='3';
    mp['H']='H',mp['I']='I',mp['J']='L',mp['L']='J',mp['M']='M',mp['O']='O',mp['S']='2',mp['T']='T',mp['U']='U',mp['V']='V',mp['W']='W',mp['X']='X';
    mp['Y']='Y',mp['Z']='5',mp['1']='1',mp['2']='S',mp['3']='E',mp['5']='Z',mp['8']='8';
    while(cin>>s)
    {
        int i,j,k,l;
        l=s.size()-1;
        bool t=true,f=true;
        for(int i=0,j=l;i<=l/2;i++,j--)
        {
            if(s[i]!=s[j])
                t=false;
            if(mp[s[i]]!=s[j])
                f=false;
        }
        cout<<s;
        if(!f&&!t)
            cout<<" -- is not a palindrome.\n\n";
        else if(f&&t)
            cout<<" -- is a mirrored palindrome.\n\n";
        else if(!f&&t)
            cout<<" -- is a regular palindrome.\n\n";
        else if(f&&!t)
            cout<<" -- is a mirrored string.\n\n";
    }
    return 0;
}
