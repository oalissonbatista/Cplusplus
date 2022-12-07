#include <iostream>
using namespace std;
int main (){
    int A,B;
    cin >> A;
    cin >> B;

    if ((A+B) >= 10){
        cout << "error\n";
    }else {
        cout << A+B;
    }
    return 0; 
}