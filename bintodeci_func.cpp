#include<iostream>
using namespace std;

int binaryToDeci(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int lastdigit=n%10;
        ans=ans+x*lastdigit;
        x=x*2;
        n=n/10;
    }
    return ans;

}

int main()
{
int n;
cin>>n;
cout<<binaryToDeci(n)<<endl;
}