#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int sum = 0;
    while(n--){
        int l, c; cin >> l >> c;

        if(l > c){
            sum += c;
        }
    }

    cout << sum << endl;


    return 0;
}