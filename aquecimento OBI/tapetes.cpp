#include <iostream>
 
using namespace std;

int main() {
    long long L, N;
    cin >> L >> N;

    long long maiortamanho = L - (N-1);
    cout << maiortamanho * maiortamanho + (N-1)*1 << endl;
    
  return 0;
}
