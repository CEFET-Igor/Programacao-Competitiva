/* 2463 - Corredor */
#include <iostream>
#include <vector>

using namespace std;

int maxSumSequencia(const vector<int>& nums) {
    int maxAtual = nums[0];
    int maxGlobal = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        maxAtual = max(nums[i], maxAtual + nums[i]);
        maxGlobal = max(maxGlobal, maxAtual);
    }

    return maxGlobal;
}

int main() {
    int N;
    cin >> N;

    vector<int> corredor(N, 0);

    for (int i = 0; i < N; ++i) {
        cin >> corredor[i];
    }

    int maxSoma = maxSumSequencia(corredor);
    cout << maxSoma << endl;
    return 0;
}
