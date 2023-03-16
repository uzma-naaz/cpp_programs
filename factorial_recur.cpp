#include<iostream>
using namespace std;

int facts(int n)
{
   
    if(n==1|| n==0)
    {
        return n;
    }
    else
    {
        return n* facts(n-1);
    }
    
}


int main()
{
    int n;
    cin>>n;
   
     
     cout<<facts(n);
     return 0;
}