#include <iostream>
using namespace std;

int main(){
    float n1,n2,media;
    char option;
    inicio:
    cout << "Digite o valor da N1:";
    cin >> n1;
    cout << "Digite o valor da N2:";
    cin >> n2;

    media = (n1+n2)/2;
    cout << "Sua media foi: "<< media << "\n";

    if (media >= 5){
        cout << "Voce foi APROVADO.";
    } else if (media >= 4){
        cout<< "Voce esta de RECUPERACAO.";
    } else{
        cout << "Voce esta REPROVADO.";
    }

    cout <<"\nDeseja continuar? [s/n] ";
    cin >> option;

    if(option == 'S' or option == 's'){
        goto inicio;
    }
    return 0;
}