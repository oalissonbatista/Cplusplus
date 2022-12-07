#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream = saída
    // ifstream = entrada 
    // fstream 

    ofstream arquivo;
    arquivo.open("arquivo2.txt");
    arquivo << "Two blondes were going to Disney-landwhen they came to a fork in the road.";

    arquivo.close();
    return 0;
}
