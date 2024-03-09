#include <iostream>
#include <vector>

using namespace std;

int mmc(int a, int b) {
    int m = a, n = b;
    while (m != n) {
        if (m < n) m += a;
        else n += b;
    }
    return m;
}

int main() {
    
    int n;;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];        
    }

    int result = nums[0];

    for( int i = 1; i < n; i++) {
        result = mmc(result, nums[i]);   
    }
    cout << result << endl;
}