#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[7][20]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    string s;
    int i(1);
    while(cin>>s){
        if(s=="#")
            break;
        if(s==c[0])
            cout<<"Case "<<i<<": ENGLISH\n";
        else if(s==c[1])
            cout<<"Case "<<i<<": SPANISH\n";
        else if(s==c[2])
            cout<<"Case "<<i<<": GERMAN\n";
        else if(s==c[3])
            cout<<"Case "<<i<<": FRENCH\n";
        else if(s==c[4])
            cout<<"Case "<<i<<": ITALIAN\n";
        else if(s==c[5])
            cout<<"Case "<<i<<": RUSSIAN\n";
        else
            cout<<"Case "<<i<<": UNKNOWN\n";
        i++;
    }
    return 0;
}
