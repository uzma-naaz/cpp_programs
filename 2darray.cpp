#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter rows and column of matrix\n";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter values in matrix";
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<" ";
            cin>>arr[i][j];
        }
    }
    cout<<"array formed is :\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
       
    }
    
    return 0;
}