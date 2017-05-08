#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double phiNumerator = (sqrt(5) + 1) / 2;
    double denominator = sqrt(5);
    int power = 999;
    int base = 10;

    //According to Binet's Formula: fibNum_n = pow(phiNumerator, n) / denominator >= pow(base, power)
    //After taking log from both sides we get log(phiNumerator) * n = log(base) * power + log(denominator)
    //Now we can easily solve it:
    int n = int(ceil((log(base) * power + log(denominator)) / log(phiNumerator)));

    cout << n << endl;

    return 0;
}