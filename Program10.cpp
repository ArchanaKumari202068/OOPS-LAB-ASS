 //Program to demonstrate the concept of 
 //a. Default Constructor
 //b. Parameterized Constructor
 //c. Copy Constructor
 //d. Constructor Overloading
#include<iostream>
using namespace std;

class function
{
    private:
    int x;
    int y,z;
    
    public:
   function()                                       //deafult constructor
   { 
       cout<<endl<<"This shows the deafult constructor."<<endl;
   }
   function(int X, int Y)                          //parametrised constructor of two arguments
   {
       x=X; 
       y=Y;
       cout<<"This is parametrised construction with value of a="<<x<<" and b="<<y<<endl;
   }
   function(function &z)                           //copy constructor
   {
       x=z.x;
       y=z.y;
       cout<<"This is copy constructor :"<<x<<" "<<y<<endl;
   }
 function(int p, int q,int r)                          //parametrised constructor of two arguments
   {
       x=p; 
       y=q;
       z=r;
       cout<<"This is constructor overloading with value of a:"<<x<<" and b:"<<y<<" and z: "<<z<<endl;
   }

};

int main()
{
    
    function Z1;
    function Z2(4,6);
    function Z3(Z2);
    function Z4(9,5,1);
    return 0;
}