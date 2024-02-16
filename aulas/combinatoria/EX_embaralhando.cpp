#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef long long lint;


lint fatorial(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial(n-1)*n;
    }
};


int main() {
    string str;

    while(cin >> str) {
        
        if(str == "0") break;

        cout << fatorial(str.length()) << endl;
        
    }

    return 0;
}