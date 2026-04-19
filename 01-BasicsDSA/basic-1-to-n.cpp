//Print even numbers from 1 to n

#include <iostream>
using namespace std ;
int main(){
    int n,i=1;
    cin >> n;

    while (i<=n){
        if (i%2==0){
        cout << i << " ";
        }
        i++;
    };
    return 0;
}

//Print odd numbers froms 1 to n 

#include <iostream>
using namespace std ;
int main(){
    int n,i=1;
    cin >> n;

    while (i<=n){
        if( i % 2 != 0){
        cout << i << " ";}
     i++ ;}

    return 0;}


//Sum of numbers from 1 to n 

#include <iostream>
using namespace std ;
int main(){
    int n,i=1,sum=0;
    cin >> n;

    while (i<=n){
        sum = sum + i;
        i++;
    }
        
    cout << sum ;

    return 0;}