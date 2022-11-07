#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int r, R, x, y;
    //x^2+y^2 == R^2
    cout << "Ввeдите R, r, x,y" << endl;
    cin >> R >> r >> x >> y;
    if ((x*x + y*y < R*R) && (x*x + y*y > r*r))
        cout << "Попадание" << endl;
    else cout << "Промах" << endl;
    return 0;
}