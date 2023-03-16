#include<iostream>
using namespace std;
int main()
{
    int num,sum,i;
    cin>>num;
    sum=0;
    
    for(int i=1;i<=num;i++)
    {
    sum=sum+i;
    }
    cout<<"sum of numbers"<<sum<<endl;
    return 0;
}