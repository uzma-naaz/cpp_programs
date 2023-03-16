#include<iostream>
using namespace std;

int adds(int *q,int *r){
    int sum= *q+*r;
    cout<< sum;
}

int main()
{
    int a=103;
    int b=320;
    adds(&a,&b);
    adds(&a,&b);
    adds(&a,&b);
}