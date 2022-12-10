#include <iostream>
using namespace std;

int main(){
    // (expressao) ? valor1; valor2;
    int n1,n2,nota;
    string res;

    cin >> n1;
    cin >> n2;
    
    nota = n1 + n2; 

    //(nota >= 60) ? res = "Aprovado" : res = "Reprovado";

    res = (nota>=60) ? "aprovado" : "reprovado";

    cout << res;

    return 0;



}