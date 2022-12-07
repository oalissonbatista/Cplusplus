#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;

    if (C >= A and C <= B ){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}