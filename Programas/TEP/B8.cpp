#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int a = int(log(N)/log(2));
    cout << pow(2, a);
    cout << "\n";

    return 0; 
}