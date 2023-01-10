#include <iostream>
using namespace std;

int main(){
    int N,K,maior;
    int max = 0;
    cin >> N;  // n de bastoes
    cin >> K;  // bastoes que ele usará
    int B[N],cresc;
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    for (int i = 0; i < N; i++){
        for(int j= i+1;j < N;j++){
            if(B[i] < B[j]) {
                cresc = B[i];
                B[i] = B[j];
                B[j] = cresc;
            }
        }
    }
    for (int i = 0; i < K; i++){
        max = max + B[i];
    }
    cout << max << "\n";

    return 0;
}