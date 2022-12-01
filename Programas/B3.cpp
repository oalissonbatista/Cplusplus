#include <iostream>
using namespace std;

int main(){
    int cont =0;
    string frase;
    cin >> frase;
    for (int i=0; i <= frase.length(); i++){
        for(int j = 1; j <= frase.length(); j++){
            if(frase[i] == frase[j]){
                cont ++;
            }
        }
    }
    if (cont > frase.length()){
        cout << "no\n"; 
    } else {
        cout << "yes\n";
    }
    return 0;
}
