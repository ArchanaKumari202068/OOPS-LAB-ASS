// Write a class ACCOUNT that represents your bank account 
//and then use it. The class should allow you to 
//deposit money, withdraw money, calculate intrest
//and send you a message if you have insufficient balance.

  #include <iostream>
using namespace std;
//class named Account is created
class Account
{// Access modifier
    private:
 //data member
    int bal=0;                                    
    public: 
 //Constructor is created
    Account (int a)
    {
        bal=a;
    }
 //Function is created for deposit money
    int depositeMoney(int add_amount)                 
    {
        bal=bal+add_amount;  
        return bal;
    }
 //Function is created for withdraw money
    int withdrawMoney(int withdraw_money)                
    {
     //Conditions
        if(bal>=withdraw_money)
        {
           bal=bal-withdraw_money; 
           return 1;
        }
        else 
        {
            cout<<"ALERT! Insufficient balance."<<endl;
            return -1;
        }
    }  
 //To calculate interest
    int interest(int rate, int time)            
    {
       bal=(bal*rate*time/100)+bal;
        return bal;
    }
 //display curr balance
    void display()                                  
    {
        cout<<"The current balance in your account : "<<bal;
    }
};

int main()
{
 //Constructor called
    Account A1=Account(5000);
 //2000 Money deposited
    A1.depositeMoney(2000);  
 //3000 Money withdraw
    int status = A1.withdrawMoney(3000);          
    if(status==1)
    {
        A1.interest(5,2);
        A1.display();
    }
    return 0;
}
