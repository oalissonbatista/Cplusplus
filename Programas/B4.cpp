#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ai[N]; 
    int menor = ai[0];
    int maior = 0;
    for(int i = 0; i < N; i++){
        cin >> ai[i];
    }
    for (int i = 0; i < N; i++){
        if (i == 0){
            menor = ai[0];
        }
        if (ai[i] < menor){
            menor = ai[i];
        }
    }
    for (int i = 0; i < N; i++){
        if (i == 0){
            maior = ai[0];
        }
        if (ai[i] > maior){
            maior = ai[i];
        }
    }
    //cout << maior << "\n";
    //cout << menor;
    int minimo = maior - menor;
    cout << minimo << endl;
    
    return 0;
}