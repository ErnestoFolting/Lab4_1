//16.Нехай x1 = y1 = 1; xi = 0,3 xi -1; yi = xi -1 + yi -1, i = 2, 3, ... . Дано натуральнечисло n.Знайти
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float x1, y1, S, x, y;
    cout << "Input n: " ; cin >> n;
    x1 = 1;
    y1 = 1;
    S = 1.0 / (1 + 1);
    for (i = 2; i <= n; i += 1) {
        x = x1 * 0.3;
        y = x1 + y1;
        S += (x / (1 + abs(y)));
        x1 = x;
        y1 = y;
    }
    cout << "S = " << S;
}
