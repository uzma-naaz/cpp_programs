#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    if(savings>2000)
    {
        cout<<"we will watch movie"<<endl;
        if (savings>2600)
        {
            cout<<"pvr";
        }
        else{
            cout<<"fun";
        }
    }
    else if (savings>300)
    { 
        cout<<"we will go to restaurant\n";
        if(savings>1000)
        {
            cout<<"mocha";
        }
        else
        {
            cout<<"kaveri";
        }
        
    }
    else if (savings>50)
    {
        cout<<"we will go to park"<<endl;
        if (savings>35)
        {
            cout<<"oxygen park";
        }
        else{
            cout<<"machli ghar";
        }
        
    }
    else {
        cout<<"ghar me baitho";
    }
        return 0;
    
}