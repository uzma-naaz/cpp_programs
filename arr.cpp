#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int i;
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int insert;
    cout<<"insert the value in array : \n";
    cin>>insert;
    int ind;
    cout<<"enter the index of the value to be inserted";
    cin>>ind;
    if (arr[i]>insert)
    {
        ind=1;
    }
    else if (arr[i]<=insert && insert<=arr[i+1])
    {
        ind=i+1;
       
    }
    else if (i==0)
    {
        ind=0+1;
    }
    cout<<"array is ";
    for (i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}