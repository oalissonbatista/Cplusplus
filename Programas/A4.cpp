#include <iostream>
using namespace std;
int main(){
    int r, g, b;
    cin >> r;
    cin >> g;
    cin >> b;
    string rstr = std::to_string(r);
    string gstr = std::to_string(g);
    string bstr = std::to_string(b);
    string soma = rstr+gstr+bstr ;
    int somastr = stoi(soma);

    if( somastr % 4 == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}