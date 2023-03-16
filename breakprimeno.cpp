#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"non prime number";
            break;
        }
    }
        if (i==num){
        cout<<"prime number";
        }
    return 0;
}