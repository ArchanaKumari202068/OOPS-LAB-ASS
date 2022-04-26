//Program to make the use of inline function.
#include <iostream>
using namespace std;
// inline function is created
inline int add(int num1,int num2){ 
    return num1+num2;
}

int main()
{
    int a,b;
    cout<<"Enter number1: ";
    cin>>a;
    cout<<"Enter number2: ";
    cin>>b;
    //arg passed in function
    cout<<"Sum is "<<add(a,b);

    return 0;
}


