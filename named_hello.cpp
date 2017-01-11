// named_hello.cpp
// Author: Diba Mirza
// Date created: 1/10/2017
// Program to print customized "Hello" messages 

#include <iostream> //input and output

using namespace std;//allows the use of standard input/output 

int main(){
    
    string name; // In C++ we need to declare a variable before using it. 
                 // Contrast this with the python version of this program
    cout<<"Enter name :";
    cin>> name;
    cout<<"Hello "<<name<<endl;
    return 0; // 0 for success!
}

