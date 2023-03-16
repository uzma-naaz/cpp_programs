#include<iostream>
using namespace std;
int binarys(int arr[],int n,int key)
{
    int start=0;
    int end=n;
    int mid;
    int i;
    while(start<=end)

    {
        int mid=(start+end)/2;

    if(arr[mid]==key)
        {
        return mid;
        }
    else if(arr[mid]>key)
    {
        end=mid-1;
    }
    else if(arr[mid]<key)
    {
        start=mid+1;
    }
    else
    {
        cout<<"element not found";
    }
      }

return -1;
}
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter values in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
    cout<<binarys(arr,n,key);
    return 0;
}