#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, m1, m2, m3;
    char min_n, max_n, avr_n;
    cin >> a >> b >> c;
    if (a > b) {
        if (c > a) {
            m3 = a;
            m1 = b;
            m2 = c;
        }
        else {
            m2 = a;
            if (c > b) {
                m3 = c;
                m1 = b;
            }
            else {
                m3 = b;
                m1 = c;
            }
        }
    }
    else {
        if (c > b) {
            m3 = b;
            m1 = a;
            m2 = c;
        }
        else {
            m2 = b;
            if (c > a) {
                m3 = c;
                m1 = a;
            }
            else {
                m3 = a;
                m1 = c;
            }
        }
    }
    cout << "Минимальное:"<< m1 << " " << "Максимальное:" << m2 << " " << "Cреднее:" << m3 << endl;
    return 0;

}