#include <bits/stdc++.h>

using namespace std;

int n, m;

void floodFill(vector<vector<char>>&a, int row, int col){

    // Verificar limites da matriz
    if (row < 0 || col < 0 || row >= n || col >= m || a[row][col] == 'X' || a[row][col] == 'T') {
        return;
    }


    // Preencher a célula com o novo valor
    a[row][col] = 'T';

    // Preencher os vizinhos recursivamente
    floodFill(a, row + 1, col); // Down
    floodFill(a, row - 1, col); // Up
    floodFill(a, row, col + 1); // Right
    floodFill(a, row, col - 1); // Left
} 



int main(){

    while(true){

    cin >> n >> m;

    if(n == 0 and m == 0){
        break;
    }

    vector<vector<char>> a(n);

    int row, col;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c;
            if(c == 'T'){
                row = i;
                col = j; 
            }
            a[i].push_back(c);
        }
           }

    floodFill(a, row + 1, col); // Down
    floodFill(a, row - 1, col); // Up
    floodFill(a, row, col + 1); // Right
    floodFill(a, row, col - 1); // Left

    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    }


    return 0;
}