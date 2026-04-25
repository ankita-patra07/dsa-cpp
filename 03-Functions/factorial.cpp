#include <iostream>
using namespace std;

int factorial(int n){
    int i=1, fact=1;
    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    i++;
    return fact;
}

int main(){
    cout << factorial(5);
    return 0;
}