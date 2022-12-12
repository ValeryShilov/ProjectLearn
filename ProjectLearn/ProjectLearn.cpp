#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int n, i, j, l, k;
    cin >> n;
    
    if (n % 2 != 0) {
        for (k = 1; k <= n / 2 + 1; k++) {
            for (i = 1; i <= (n-k) / 2; i++) {
                cout << " ";
            }
            for (j = 1; j <= k*2-1; j++) {
                cout << "*";
            }
            for (l = 1; l <= (n-k) / 2; l++) {
                cout << " ";
            }
            cout << endl;
        }
    }
    return 0;

}