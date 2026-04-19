// Absolute differencce with 51
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     if (n >= 51) {
//         cout << 3 * abs(n - 51);
//     }
//     else {
//         cout << abs(51-n);
        
//     }
//     return 0;
// }

// ====================================================
// CHECK 30 OR SUM 30
#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter a : ";
    cin >> a ;

    cout << "Enter b : ";
    cin >> b ;

    if ( a == 30 || b == 30){
        cout << true;
    }
    else if (a + b == 30) {
        cout << true;
    }
    else{
        cout<< false << "  : "<< a + b;
    }
    
    return 0;
}

// =======================================================
// Write  a program to check a given integer and return true if its within 10 of 100 or 200.
#include <iostream>
using namespace std;
int main(){
    int a;
    
    cout << "Enter a : ";
    cin >> a ;

    if ( (a >=90 && a <= 110) || (a >=190 && a<= 210) ){
        cout << true;
    }
    else {
       cout <<  false;
    }
    return 0;
}

