#include <bits/stdc++.h>
using namespace std;

set<unsigned> getUniverseSetForRange(unsigned start, unsigned end) {
    set<unsigned> universeSet;
    for (unsigned i {start}; i <= end; ++i)
        universeSet.insert(i);
    return universeSet;
}

unsigned eratosthenesSieve(unsigned n) {
    set<unsigned> primes = getUniverseSetForRange(2, n);

    for (unsigned i {2}; i * i <= n; ++i) {
        if (primes.find(i) != primes.end()) {
            for (unsigned j {i * i}; j <= n; j += i) {
                primes.erase(j);  // Corrigido para remover múltiplos de i
            }
        }
    }

    return primes.size();
}

int main(){


    int n; cin >> n;
    cout << eratosthenesSieve(n);






    return 0;
}