// Write a class ACCOUNT that represents your bank account and then use it. The class should allow you to deposit money, withdraw money, calculate intrest
 //and send you a message if you have insufficient balance

  #include <iostream>
using namespace std;

class Account
{
    private:                                    
    int bal=0;                                    
    public:        
    Account (int a)
    {
        bal=a;
    }
    int depositeMoney(int add_amount)                 
    {
        bal=bal+add_amount;  
        return bal;
    }
    int withdrawMoney(int withdraw_money)                
    {
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
    int interest(int rate, int time)            
    {
       bal=(bal*rate*time/100)+bal;
        return bal;
    }
    void display()                                  
    {
        cout<<"The current balance in your account : "<<bal;
    }
};

int main()
{
    Account A1=Account(5000);
    A1.depositeMoney(2000);                       
    int status = A1.withdrawMoney(3000);          
    if(status==1)
    {
        A1.interest(5,2);
        A1.display();
    }
    return 0;
}
