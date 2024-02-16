#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long lint;


lint fatorial(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial(n-1) * n;
    }
};


int main() {

    int num;
    lint ACM;
    vector<int> digits;

    while (cin >> num){

        if(num == 0) break;
        
        digits.clear();
        
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        ACM = 0;
        for (int i = digits.size(); i > 0; i--) {
            ACM += digits[i-1] * fatorial(i);
        }

        cout << ACM << endl;

    }
}
