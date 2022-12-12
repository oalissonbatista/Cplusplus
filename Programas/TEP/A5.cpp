#include <iostream>
using namespace std;
int main(){
    int X,A,B;
    cin >> X;
    cin >> A;
    cin >> B;

    if (B <= A) {
        cout << "delicious" << endl;
    } else if((B-A) > X) {
        cout << "dangerous" << endl;
    }else {
        cout << "safe" << endl;
    }
    return 0;
}