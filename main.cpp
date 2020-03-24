#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    return 0;

    if (a>b)
	cout << " maximum = " << a;
    else
	cout << " maximum = " << b;

    if (a<b)
	cout << " minimum = " << a;
    else
	cout << " minimum = " << b;

}
