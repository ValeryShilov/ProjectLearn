#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int n, i, j, l;
    cin >> n;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= n - (i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}