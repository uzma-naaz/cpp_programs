#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    int i=1;
    do
    {
        
        sum=sum+i;
        i=++i;
    }
    while(i<=num);
    {
    cout<<sum;
    }
    return 0;
   
}