//Count digits in a number
// #include <iostream>
// using namespace std;
// int main(){
//     int n , count = 0;
//     cin >> n;
//     while(n > 0){
//         n = n / 10;
//         count++;
//     }
//     cout << count;
//     return 0 ;
// }
//===========================================================
//Reverse of numbers 
// #include <iostream>
// using namespace std ;
// int main(){
//     int n , rev = 0 , last ;
//     cin >> n ;
//     while (n>0){
//         last = n % 10 ;
//         rev = rev * 10 + last;
//         n = n / 10 ;
//     }
//     cout << rev;
//     return 0 ;
// }
//==============================================================
//Palindrome of numbers 
// #include <iostream>
// using namespace std ;
// int main(){
//     int n , rev = 0 , last ;
//     cin >> n ;
//     int originalNum = n ;
//     while (n>0){
//         last = n % 10 ;
//         rev = rev * 10 + last;
//         n = n / 10 ;
//     }
//     if( originalNum == rev ){
//         cout <<  "True";
//     }
//     else {
//         cout << "False";
//     }
//     return 0 ; 
// }
//============================================
//ARMSTRONG NUMBER   
// #include <iostream>
// using namespace std;
// int main(){
//     int num,sum = 0;
//     cin >> num;
//     int original = num;
//     while(num>0){
//         int last = num % 10;
//         num = num / 10;
//         sum = sum + (last * last * last);
//     }
//     if (original == sum){
//         cout << "ITS AN ARMSTRONG NUMBER";
//     }
//     else {
//         cout << "ITS NOT AN ARMSTRONG NUMBER";
//     }
//     return 0;
// }

// PRINT FACTORIAL OF A NUMBER N 
// #include <iostream>
// using namespace std ;
// int main(){
//     int n , fact = 1;
//     cout<< "Enter a number : ";
//     cin >> n;

//     for(int i = 1; i<=n ; i++){
//        fact  =  fact * i;
//     }   
//     cout << fact;
    
//     return 0;


// }
