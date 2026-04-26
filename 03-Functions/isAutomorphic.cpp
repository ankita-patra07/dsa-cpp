#include <iostream>
using namespace std;

bool isAutomorphic(int n){
    int sq = n * n;
    int last_digit;
    int l_digit;
    while(n>0){
        l_digit = n % 10;
        last_digit = sq % 10;
        if(l_digit != last_digit){
            return false;
        }
        n = n / 10;
        sq = sq / 10;
    }
    return  true;
}

int main(){
    cout << isAutomorphic(7);
    return 0;
}
