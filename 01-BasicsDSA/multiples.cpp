//Even multiples

#include <iostream>
 using namespace std;
 int main(){
    int n, i=1;
    cin >> n;
    while (i<=10){
        if ( i % 2 == 0){
        cout << n << " x " << i <<"="<< n * i << endl;}
        i++;
        }
        return 0;
} 

//Multiplication table 

 #include <iostream>
 using namespace std;
 int main(){
    int n, i=1,mul=1;
    cin >> n;
    while (i<=10){
        mul = n * i ;
        i++;
        cout << n << " x " << i << " = " << n * i << endl;
    }
        return 0;
}