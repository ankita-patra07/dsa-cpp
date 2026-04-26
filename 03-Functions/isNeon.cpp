#include <iostream>
using namespace std;

bool isNeon(int n){
    int original = n;
    int sq = n * n;
    int sum = 0;
    while (sq>0){
        int digit = sq % 10;
        sum = sum + digit;
        sq = sq / 10;
    }
    return sum == original;
 
}

// PRINT NEON NUMBERS FROM 1 TO 100

int printN(){
    for(int i =1; i<=100;i++){
        if(isNeon(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    cout << printN() ;
    return 0;
}