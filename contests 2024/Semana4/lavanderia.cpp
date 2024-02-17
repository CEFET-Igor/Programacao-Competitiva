#include <bits/stdc++.h>

//https://www.beecrowd.com.br/judge/pt/problems/view/1537

using namespace std;


#define ull unsigned long long 

#define MAXN 17

int main() {

    ull fat[MAXN];

    fat[1] = 1;
    for(ull i = 2; i < MAXN; i++){
        fat[i] = (i * fat[i-1]);
    }

 

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }
        
        cout << fat[n] / 6 << endl;
    }

    return 0;
}