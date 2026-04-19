//CALCULATOR 

#include <iostream>
using namespace std;
int main(){
    int a , b;
    char op;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter an operator (+,-,*,%,/) : ";
    cin >> op;

    if(op == '+')
        cout << "Addition of a and b is "<< a + b;
    else if(op == '-')
        cout << "Subtraction of a and b is "<< a - b;
    else if(op == '%')
        cout << "Modulus of a and b is "<< a % b;
    else if(op == '*')
        cout << "Multiplication of a and b is "<< a * b;
    else if(op == '/')
        cout << "Division of a and b is "<< a / b;
    else
        cout << "Error ! Operator is not correct";
    
    
    return 0;

}