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
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
        if (num2 == 0)
        {
            cout << "ERROR can't divide ";
        }
    }
    else
    {
        cout << "Invaild Operator";
    }

    cout << "Result= " << result << endl;
    cout << "*******************************" << endl;

    return 0;
}