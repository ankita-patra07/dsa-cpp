//MATRIX PATTERN/ SEQUENTIAL PATTERN

#include <iostream>
using namespace std;

int main(){
    int n ,num=1;
    cout << "Enter a number : ";
    cin >> n ;

    for(int i = 1; i<=n ; i++){
        
        for (int j = 1; j<=n ; j++){
            
            cout << num << " ";
            num ++;
        }
        
        cout << endl;    
    }
    
    
    return 0;
}
