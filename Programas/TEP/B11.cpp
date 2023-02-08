#include <iostream>
using namespace std;

int main(){

string  S;
cin>>S;
int c[26]={};
for(int i=0; i<S.length(); i++)
{
    c[S[i]-'a']++;
   
}
 
for(int i=0; i<26; i++)
{
    if (c[i]==0)
    {
        cout<<(char)(i+'a') << "\n";
        return 0;
    }
}
cout << "None" << "\n";
}