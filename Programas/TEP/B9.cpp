#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int str;
    char s[100];
    cin >> s;
    cout << s[0] << strlen(s) -2 << s[strlen(s)-1] << endl;
    return 0;
}