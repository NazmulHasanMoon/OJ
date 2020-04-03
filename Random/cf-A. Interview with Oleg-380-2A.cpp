#include<iostream>
#include<string>
const int x=105;
using namespace std;
char ch[x],c[x];
int main()
{
    int n,i,j,k;
    cin>>n;
    cin>>ch;
    for(i=0;i<n;i++)
    {

        /*if((ch[i]=='o'&&ch[i+1]=='g'&&ch[i+2]=='o'&&ch[i+3]=='g'&&ch[i+4]=='o'&&ch[i+5]=='g'&&ch[i+6]=='o'))
        {
            cout<<"***";
            i+=6;
        }
        else if(ch[i]=='o'&&ch[i+1]=='g'&&ch[i+2]=='o'&&ch[i+3]=='g'&&ch[i+4]=='o')
        {
            cout<<"***";
            i+=4;
        }*/
        if(ch[i]=='o'&&ch[i+1]=='g'&&ch[i+2]=='o')
        {
            //cout<<"***";
            //i+=2;
            j=i+3;
            for(;;)
            {
                if(ch[j]=='g'&&ch[j+1]=='o')
                    j+=2;
                else
                {
                    i=j-1;
                    break;
                }
            }
            cout<<"***";
        }
        else{
            cout<<ch[i];
        }
    }
    cout<<endl;
    return 0;
}
