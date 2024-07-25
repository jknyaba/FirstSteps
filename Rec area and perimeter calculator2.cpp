#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void result(double length, double breadth);

int main()
{
    double length;
    double breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    result(length, breadth);
    return 0;
}
void result(double length, double breadth)
{
    double area = length * length;
    double perimeter = (2 * length) + (2 * breadth);
    cout << "Area is: " << area << endl
         << "Perimeter is: " << perimeter << endl;
}