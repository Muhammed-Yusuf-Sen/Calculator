#include <iostream>
#include "Calculator.hpp"
using namespace std;

// //

char operation, control_2;
float number1, number2, result;
bool control = true;

// //

int main()
{
	Calculate calculate;
    cout << "Welcome to our calculator" << endl << "You can do addition, subtraction, multiplication and division operations here." << endl;
    
    while (control == true)
    {
        cout << "\nplease choose an action(+,-,*,/): ";
        cin >> operation;
        cout << "\nplease choose the first number: ";
        cin >> number1;
        cout << "\nplease choose the secont number: ";
        cin >> number2;

        switch (operation)
        {
        case '+':
            result = calculate.sum(number1,number2);
            break;

        case '-':
            result = calculate.sub(number1,number2);
            break;

        case '*':
            result = calculate.mul(number1,number2);
            break;

        case '/':
    	    if (number2 != 0)
            {
			    result = calculate.div(number1,number2);
            }
		    else
            {
			    cout << "Error: Division by zero is not possible!" << endl;
            }
            break;
        default:
            cout << "Please enter a valid transaction!" << endl;
            break;
        }
        cout << "The result: " << result << endl;
        cout << "\nDo you want to continue calculating?(y/n): ";
        cin >> control_2;
        if (control_2 == 'y')
        {
            control = true;
        }
        else
        {
            control = false;
        }
    }
    cout << "Good Bye\n" << endl;
    system("pause");
	return 0;
};