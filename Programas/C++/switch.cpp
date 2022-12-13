#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "Digite: \n";
    cin >> n1;

    switch(n1){
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        case 3: 
            cout << "3";
            break;
        default:
            cout << "maior q 3";   
   }
}

