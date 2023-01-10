#include <iostream>
using namespace std;

int main(){
    int N,i,ligado;
    cin >> N;
    int A[N];
    for (i = 0; i < N ; i++){
        cin >> A[i];
    }
    for (i = 0; i < N; i++){
        if (A[i] == 1){
            ligado = i;              // retorna 1
        }    
        if (A[0] == ligado+1){
            cout << "-1" << endl;
        }

        ligado = A[0];
        if (A[0] == 2){
            cout << "1" << endl;
        }
        if (A[0] != 2){
            ligado = A[ligado];
            if (A[ligado] == 2){
                cout << "encontei" << endl;
            }
        }

        

    }

    return 0;
}