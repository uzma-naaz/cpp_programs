#include<iostream>
using namespace std;
int main()
{
    char day;
    cout<<"enter day of week";
   cin>>day;
    switch(day)
    {
  case 'm':
         cout<<"learn programs";
        break;
        case 't':
        cout<<"learn dbms";
        break;
        case 'w':
        cout<<"learn data structure";
        break;
        case 'h':
        cout<<"learn operating system";
        break;
        case'f':
        cout<<"learn computer architecture";
        break;
        case 's':
        cout<<"learn effective communication";
        break;
        case 'u':
        cout<<"revise";
        break;
default:
cout<<"no such day exist";
    }
    return 0;
   
    


}