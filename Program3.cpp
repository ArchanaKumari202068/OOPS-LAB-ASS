// Write a function power() which raise a number m to a power n.The function takes double 
//value of m and integer value of n and returns the result.
//Use a default value of n is 2 to make the function to calculate squares
//  when this argument is omitted. 

#include <iostream>

using namespace std;
//class named square is created
class square{
  // Access modifier
  public:
  // function power is created
      int power(double m,int n = 2){
          double result = 1;
          for(int i=0;i<n;i++){
              result *=m; 
          }
          return result;
      }
};
int main()
{
  // Object is created
    square m1;
    cout<<"Result without passing exponent is \n";
  //function is called
    cout<<m1.power(5);
    cout<<"\n Result is\n";
  //function is called
    cout<<m1.power(5,4);
    
    return 0;
}
