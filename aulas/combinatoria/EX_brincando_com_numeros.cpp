#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;
typedef long long lint;

bool quadradoPerfeito(lint n) {
    lint sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

int countWays(int x) {

    int num = x;

    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }

    int ways = 0;

    do {
        if(digits[0] == 0) continue;
        int y = 0;
        for (int i = 0; i < digits.size(); i++) {
            y = (y * 10) + digits[i];
        }

        unsigned long long n = x + y;
        if (quadradoPerfeito(n)) {
            ways++;
        }
    } while (next_permutation(digits.begin(), digits.end()));

    return ways;
}

int main() {
    int x;
    cin >> x;

    cout << countWays(x) << endl;

    return 0;
}
