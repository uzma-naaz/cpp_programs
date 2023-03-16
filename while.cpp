#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter a number";
    cin>>num;
    i=1;
    int sum=0;
    while(i<=num)
    {
    sum=sum+i;
    
    i=++i;
    }
    cout<<"sum of num"<<sum<<endl;
    return 0;
}