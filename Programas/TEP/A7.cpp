#include <iostream>
using namespace std;

int main(){
    int A,B;
    cin >> A;
    cin >> B;

    if ((A + B) % 3 == 0 || A % 3 ==0 || B % 3 == 0){
        cout << "Possible";
    } else {
        cout << "Impossible";
    }
    cout << "\n";

    return 0;
}