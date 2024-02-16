/* 2455 - Gangorra */
#include <iostream>

using namespace std;

int main()
{
    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;
    
    if (P1 * C1 == P2 * C2)
        cout << 0 << endl;
    else if (P1 * C1 > P2 * C2)
        cout << -1 << endl;     
    else
        cout << 1 << endl;
    
    return 0;
}