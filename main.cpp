#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double phiNumerator = (sqrt(5) + 1) / 2;
    double denominator = sqrt(5);
    int power = 999;
    int base = 10;

    int res = int(ceil((log(base) * power + log(denominator)) / log(phiNumerator)));

    cout << res << endl;

    return 0;
}