#include <iostream>

using namespace std;
double fahrenheit_converter(double fahrenheit);

int main()
{
    double farhenheit;
    double celsius;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> farhenheit;
    celsius = fahrenheit_converter(farhenheit);
    cout << "The temperature in celsius is: " << celsius << " degrees";
    return 0;
}

double fahrenheit_converter(double fahrenheit)
{
    double celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}
