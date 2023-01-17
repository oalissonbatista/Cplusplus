#include <iostream>
using namespace std;

int main(){
    int N,doadores;
    int repeticao = 0;
    cin >> N;
    string vec[N][2];

    for(int i = 0; i < N ; i++){
        cout << "\n";
        for (int j = 0 ; j  < 2 ; j ++){
            cin >> vec[i][j];
        }
    }

    for(int i = 0; i < N ; i++){
        for (int j = i+1 ; j  < N ; j ++){
            if ((vec[i][0]) == (vec[j][0])) {
                if ((vec[i][1]) == (vec[j][1])){
                    repeticao  = repeticao + 1;
                }
            }
        }
    }

    doadores = N-repeticao;
    
    cout << doadores << endl;

    return 0;
}