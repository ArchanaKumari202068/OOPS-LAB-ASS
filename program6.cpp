// write a class STRING that can be used to store stings,add strings,equate string,output strings.
#include <iostream>

using namespace std;
//class Str is created
class Str{
    public:
        char * str = NULL;
        int len = 0;
        void length(const char * str){
            int i =0;
            while(str[i] != '\0'){
                len++;
                i++;
            }
        }
    //Storing a string using constructor
        Str(const char * string){
            length(string);
            str = new char[len];
            for (int i = 0;i<len;i++){
                str[i] = string[i];
            }
            
        }
    // function to add two strings
        void add(Str &str2){
            char * newStr = new char[len + str2.len -1];
            int i = 0;
            for(i =0;i<len;i++){
                newStr[i] = str[i];
            }
            for(int j = i;j< i+str2.len; j++){
                newStr[j] = str2.str[j-i];
            }
            delete []str;
            str = newStr;
        }
    //Function to compare each character and equate
        bool equate(Str str2){
            if(len != str2.len) return false;
            for(int i=0;i<len;i++){
                if(str[i] != str2.str[i])return false;
            }
            return true;
        }
    //this function displays strings
        void display(){
            int i = 0;
            while(str[i] != '\0')
            cout<<str[i++];
            cout<<endl;
        }
        
    
};

int main()
{
    Str str1 ("Computer");
    Str str2 ("Science");
    if(str1.equate(str2)){
        cout<<"Both are same"<<endl;
    }else{
        cout<<"Both are not same\n";
    }
    str1.add(str2);
    str1.display();

    return 0;
}
