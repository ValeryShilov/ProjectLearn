#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int n, i, j, l;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "* ";
    }
    cout << endl;
    for (j = 1; j <= n - 2; j++) {
        cout << "*";
        for (l = 1; l <= (n - 2)*2 +1; l++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int k = 1; k <= n; k++) {
        cout << "* ";
    }
    return 0;

}