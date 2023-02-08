#include <iostream>
using namespace std;

int main(){
    int x,a,b,A,B;
    cin >> x;
    cin >> a;
    cin >> b;

    A = abs(x-a);
    B = abs(x-b);

    if (A<B){
        cout << "A" << "\n";
    }else {
        cout << "B" << "\n";
    }
    return 0;
}