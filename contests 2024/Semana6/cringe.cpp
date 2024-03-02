#include<iostream>
#include<string>
#include<vector>

using namespace std;

string textoCringe(string frase){
    string vogais = "aeiou";
    string cringe = "@&!*%";
for( char &c : frase ){
        for (int i = 0; i < vogais.size(); i++){
            if (tolower(c) == vogais[i]){
                c = cringe[i];
            }
        }
    }
    return frase;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    for( int i = 0; i < n; i++ ){
        string frase;
        getline(cin, frase);
        cout << textoCringe(frase) << endl;
    }
}

