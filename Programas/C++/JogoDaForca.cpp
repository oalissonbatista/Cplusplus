#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int chances;
    string palavras[10]= {"abacaxi","uva","abacate"
    , "maca", "pera", "melao", "melancia", "ameixa", "acerola", "laranja"};
    srand(time(NULL));
    int num = rand() % 9; 
    string sorteada = palavras[num];
    int tam = sorteada.size();
    char chute[tam];

    cout << "-----Jogo da forca-----" << "\n"; 
    do{
        cout << "Adivinhe a palavra, ela tem: " << sorteada.size() << " letras" << "\n";
        char traco[tam];
        for (int i = 0; i < tam ; i ++){
            traco[i] = '-';
            cout << traco[i];
        }
        inicio:
        cout << "digite uma letra: " << "\n";
        for (int i = 0; i < sorteada.size() ; i++){
            cin >> chute;
            if (chute[i] == sorteada[i]){
                traco[i] = chute[i];
                cout << chute[i];
            }
            else{
                cout << "A palavra não tem essa letra, tente novamente..." << "\n";
                goto inicio;
            }    
        }

    }while(chute == 1);
    //cin >> letra;
    //cout << sorteada << sorteada [0];
    //cout << sorteada << sorteada.size() <<"\n";
    return 0;
}