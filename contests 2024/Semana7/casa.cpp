#include <bits/stdc++.h>

using namespace std;

int n, m;

void chuva(vector<vector<char>>&a, int row, int col){

    if(row < 0 || row >= n || col < 0 || col >= m || a[row][col] == '#' || a[row][col] == 'o'){
        return;
    }else{

        a[row][col] = 'o';

        //cout << "mexi no i " <<  row << " e j " << col << endl;
        
        if(row+1 < n && a[row+1][col] == '#'){
            chuva(a, row, col+1);
            chuva(a, row, col-1);
        }else{
            chuva(a, row+1, col);
        }

    }

    

}

int main(){

    cin >> n >> m;

    vector<vector<char>> a(n);

    int row, col;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c;
            if(c == 'o'){
                row = i;
                col = j; 
            }
            a[i].push_back(c);
        }
           }

    if(row+1 < n && a[row+1][col] == '#'){
            chuva(a, row, col+1);
            chuva(a, row, col-1);
        }else{
            chuva(a, row+1, col);
        }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }


    return 0;
}