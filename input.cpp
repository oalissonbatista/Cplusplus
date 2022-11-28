#include <iostream> 
using namespace std;  //indica onde estão as bibliotecas usadas

#define pi 3.1415
#define quebradeLinha cout <<"\n"; // define algo 

int main(){
    int x,y;
    cout << "Digite o valor de x:\n";
    cin >> x;         //input
    quebradeLinha;     // quebra de linha
    cout << "Digite o valor de y:\n";
    cin >> y;
    system("pause");  // da uma pausa
    cout << x+y;      //output
    quebradeLinha;
    cout << pi;
    
    return 0;
}