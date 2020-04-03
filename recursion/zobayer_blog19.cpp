#include<bits/stdc++.h>
using namespace std;
void inorder(int n)
{
    if(n==1||n==2){
        cout<<n<<' ';
        return;
    }
    inorder(n-2);
    cout<<n<<' ';
    inorder(n-1);

}
void preorder(int n)
{
    cout<<n<<' ';
    if(n==1||n==2)
        return;
    preorder(n-2);
    preorder(n-1);
}
void postorder(int n)
{
    if(n==1||n==2){
        cout<<n<<' ';
        return;
    }
    postorder(n-2);
    postorder(n-1);
    cout<<n<<' ';

}
int main()
{
    int n;
    cin>>n;
    cout<<"Inorder: ";
    inorder(n);
    cout<<'\n'<<"Pre-order: ";;
    preorder(n);
    cout<<"\nPost-order: ";
    postorder(n);

    return 0;
}
