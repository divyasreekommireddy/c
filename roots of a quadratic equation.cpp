#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are: " << r1 << " and " << r2;
    }
    else if (d == 0)
    {
        r1 = -b / (2*a);
        cout << "Both roots are: " << r1;
    }
    else
        cout << "Roots are imaginary";

    return 0;
}
