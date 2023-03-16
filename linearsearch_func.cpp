#include<iostream>
#include<climits>
using namespace std;
int linears(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{

    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter values in the array\n";
    for(int i=0;i<n;i++)
    {   
        
        cin>>arr[i];
    }
    int key;
    cout<<"enter a key\n";
    cin>>key;
    cout<<linears(arr,n,key);
    return 0;
}