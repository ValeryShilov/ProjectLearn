#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int n, i, j, l, k, sp;
    cin >> n;
    
    if (n % 2 != 0) {
        sp = n / 2;
        for (i = 1; i <= n / 2 + 1; i++) {
            for (j = sp+10; j >= 0; j--) {
                cout << " ";
            }
            for (k = 1; k <= n - sp * 2; k++) {
                cout << "*";
            }
            for (j = sp; j >= 0; j--) {
                cout << " ";
            }
            cout << endl;
            sp--;
        }
        }
    else cout << "Треугольник построить нельзя" << endl;
    return 0;
}