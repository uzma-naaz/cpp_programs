#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0;
    int sec=1;
    int fib;
    int i;
    for(i=1;i<=n;i++)
    {
        fib=first+sec;
        first=sec;
        sec=fib;
       cout<<first;
    }
    return 0;
}