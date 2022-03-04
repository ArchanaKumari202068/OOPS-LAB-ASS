
// Write a function power() which raise a number m to a power n.The function takes double value of m and integer
// value of n and returns the result.Use a default value of n is 2 to make the function to calculate squares
//  when this argument is omitted. 

#include <iostream>

using namespace std;
class Math{
  public:
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
    Math m1;
    cout<<"Called power function with single argument\n";
    cout<<m1.power(5);
    cout<<"\nCalled power function with two arguments\n";
    cout<<m1.power(5,4);
    
    return 0;
}