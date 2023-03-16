#include<iostream>
using namespace std;

    int sum(int n)
    {
        int nat=0;
        for(int i=1;i<=n;i++)
        
            nat=nat+i;
            return nat;
        
    }
    int main()
    {
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    }