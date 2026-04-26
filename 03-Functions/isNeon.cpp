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

int main(){
    cout << isNeon(9) ;
    return 0;
}