#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << "***********CALCULATOR*************" << endl;
    double num1, num2;
    char op;
    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter an operator (+, /, *, -): ";
    cin >> op;
    cout << "Enter a number: ";
    cin >> num2;

    double result;
    bool valid = true;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "ERROR: Cannot divide by zero" << endl;
            valid = false;
        }
        break;
    default:
        cout << "Invalid Operator" << endl;
        valid = false;
    }

    if (valid)
    {
        cout << "Result = " << result << endl;
    }
    cout << "*******************************" << endl;

    return 0;
}