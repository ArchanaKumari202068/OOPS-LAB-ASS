// Write a program to read a matrix of size mxn from the keyboard and display the name using function.
#include <iostream>
using namespace std;
// class named matrix is created
class Matrix{
 // access modifier   
    private: 
    // data members
        int rows=0;
        int columns=0;
        int ** matrix = NULL;
    public:
    // constructor named Matrix created
        Matrix(int row,int col){
            rows = row;
            columns = col;
            matrix = new int*[rows];
            for(int i = 0;i<rows;i++){
                matrix[i] = new int[columns];
            }
        }
    // function to take input from users
        void take_input(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<"Element["<<i<<','<<j<<"]: ";
                    cin>>matrix[i][j];
                }
            }
        }
    // function to display output
        void display(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    int rows,columns;
    cout<<"Enter Rows: ";
    cin>>rows;
    cout<<"Enter Columns: ";
    cin>>columns;
    //object is created(m1)
    Matrix m1(rows,columns);
    // function is called
    m1.take_input();
    cout<<"Matrix is: \n";
    m1.display();  
    return 0;
}
