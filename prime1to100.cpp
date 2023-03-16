#include<iostream>
using namespace std;
int main()
{
    int num;
    int i;
    for(num=1;num<=100;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
               
                break;
            }
        }
        if(i==num)
        {
            cout<<"prime number is =";
            cout<<num<<endl;
        }
    }
}