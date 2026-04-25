#include <iostream>
using namespace std;

int sumOfdigits(int a){
    int sum = 0, digit;
    while(a >0){
        digit = a % 10;
        a = a / 10;
        sum = sum + digit;
    }
    return sum;
}
int main(){
    int result= sumOfdigits(123);
    cout << result;
}

