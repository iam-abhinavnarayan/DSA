#include <iostream>
using namespace std;

double power(double b, int e)
{
    if (e == 0)
        return 1.0;

    if (e < 0)
        return 1.0 / power(b, -e);

    double half = power(b, e / 2);

    if (e % 2 == 0)
        return half * half;
    else
        return b * half * half;
}

int main()
{
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << "Result: " << result << endl;

    return 0;
}
