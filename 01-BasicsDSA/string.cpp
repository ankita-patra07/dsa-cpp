
//=====================================================
// ADD "if" TO A STRING 
#include <iostream>
using namespace std;
int main(){
    string s1("else");

    s1 = "if " + s1;
    cout << s1;
    
    return 0;

}

//==========================================================
// Remove character from string 
//check if number contains digit '3'
#include <iostream>
using namespace std;
int main(){
    int a,digit,flag = 0 ;
    cout << "Enter a : ";
    cin >> a ;

    while(a > 0){
        digit = a % 10;
        if ( digit == 3){
            flag = digit;
        }
        a = a/10;
        }
    if(flag == 3){
        cout << true;
    }
    else{
        cout << false;
    }
    return 0;
}

// =====================================================
// Find character lowercase or upper case 
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if ( ch >= 'a' && ch <= 'z'){
        cout << "LowerCase";
    }
    else if(ch >= 'A' && ch <= 'Z') {
        cout << "UpperCase";
    }
    else{
        cout << "Not a character";
    }
    return 0;
}

