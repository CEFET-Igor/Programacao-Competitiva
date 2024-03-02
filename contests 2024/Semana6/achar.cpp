#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 10;

bool searchWord(vector<vector<char>>& cacaPalavras, string word, int row, int col, int dx, int dy) {
    int len = word.length();
    if (row + (len - 1) * dx >= N || col + (len - 1) * dy >= N || row + (len - 1) * dx < 0 || col + (len - 1) * dy < 0) {
        return false;
    }

    for (int i = 0; i < len; ++i) {
        if (cacaPalavras[row + i * dx][col + i * dy] != word[i]) {
            return false;
        }
    }
    return true;
}

bool findWord(vector<vector<char>>& cacaPalavras, string word) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int dx = -1; dx <= 1; ++dx) {
                for (int dy = -1; dy <= 1; ++dy) {
                    if (dx != 0 || dy != 0) {
                        if (searchWord(cacaPalavras, word, i, j, dx, dy)) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char>> cacaPalavras(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> cacaPalavras[i][j];
        }
    }

    string word;
    while (cin >> word) {
        cout << findWord(cacaPalavras, word) << endl;
    }

    return 0;
}