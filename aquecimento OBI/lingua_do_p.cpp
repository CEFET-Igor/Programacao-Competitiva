#include <iostream>
#include <string>

using namespace std;

int main() {
    string msg_modificada;
    getline(cin, msg_modificada);

    for(int i=0; i<msg_modificada.size(); i++ ) {
        if (msg_modificada[i] == 'p' || msg_modificada[i] == 'P') {
            msg_modificada.erase(i, 1);
        }
    }

    cout << msg_modificada << endl;

    return 0;
}
