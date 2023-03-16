#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    if (a>b)
    {
        if (a>c)
        {
    cout<<"a is greatest"<<a;
    }
    else {
        cout<<"c is greatest";
    }
    }
    else if(b>c)
    {
        cout<<"b is greatest"<<b;

    }
    else{

    
    cout<<"c is greatest";
    }
}