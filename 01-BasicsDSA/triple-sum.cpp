//Triple sum for same values 
#include <iostream>
using namespace std ;
int main(){
    int a , b;
    cout << "Enter a : ";
    cin >> a ;

    cout << "Enter b : ";
    cin >> b ;

    if(a == b){
        cout << "The triple sum of number is : " << 3 * (a + b);
    }
    else{
        cout << "The numbers are not same  :"<< a + b;
    }
    return 0;
}

//SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3;

#include <iostream>
using namespace std ;
int main(){
    int N,i=1,sum=0;

    cout << "Enter a number N : ";
    cin >> N;

    while (i<=N){
        if( i % 3 == 0){
            sum = sum + i;
        }

     i++ ;

    }
    cout << sum ;
    return 0;
}