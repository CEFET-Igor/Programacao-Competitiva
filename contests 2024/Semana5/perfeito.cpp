#include <bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;

    if(n == 6 || n == 28 || n == 496 || n == 8128){
        cout << "sim" << endl;
    }else{
        cout << "nao" << endl;
    }


    int map[10010] = {0};
    map[6]++; map[28]++; map[496]++; map[8128]++;

    for(int i = 5; i <= n; i++){
        if(map[i]){
            cout << i << " ";
        }
    }
    

    return 0;
}