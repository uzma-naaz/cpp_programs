#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n+1-j;i++)
        {
            cout<<i<<" ";

        }
        cout<<endl;
    }
    return 0;


}