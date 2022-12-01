#include <iostream>
using namespace std;

int main(){
    int cont =0;
    string frase;
    cout << "Digite: ";
    cin >> frase;
    //palavra: alisson
    for (int i=0; i <= frase.length(); i++){
        for(int j = 1; j <= frase.length(); j++){
            if(frase[i] == frase[j]){
                cont ++;
                
            }
        }
    }
    cout << cont;
    
    return 0;
}
