// rows and column increasing 
// 2 3 4 
// 3 4 5  if n=3
// 4 5 6 

#include <iostream>
using namespace std;

int main(){
    int n = 3;

    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << i + j << " ";
        }
        cout<< endl;
    }
    return 0;
}