#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a[10]{ 12,2398,8,123,2134,-4,-6,9,23,3 };
    int mx = -9999999, mn = 9999999;
    int mx_n, mn_n, cnt = 0;

    int leight = sizeof(a) / sizeof(a[0]);
    
    for (int i = 0; i < leight; i++) {
        if (a[i] > mx) {
            mx = a[i];
            mx_n = i;
        }
        if (a[i] < mn) {
            mn = a[i];
            mn_n = i;
        }
    }
    for (int j = mx_n+1; j < mn_n; j++) {
        if (a[j] > 0) cnt++;
    }
    cout << cnt << endl;

    return 0;

}