#include <iostream>
using namespace std;

void calculator();

// Initiates two global integer variables number01 and number02 for later use
int number01 = 0;
int number02 = 0;
double result;
char o;

int main() {
	// Imports the calculator function into main
	calculator();

	// Handles logic with switch statement
	switch (o) {
	case '+':
		result = number01 + number02;
		break;
	case '-':
		result = number01 - number02;
		break;
	case '*':
		result = number01 * number02;
		break;
	case '/':
		if (number02 != 0) {
			result = number01 / number02;
		}
		else {
			cout << "ERROR! Division by zero." << endl;
		}
		break;
	case '%':
		if (number02 != 0) {
			result = number01 % number02;
		}
		else {
			cout << "ERROR! Division by zero." << endl;
		}
		break;
	default:
		cout << "Invalid operator." << endl;
		return 1;
	}

	// Adds the two numbers together
	cout << "Output: ";
	cout << number01 << o << number02 << "=" << result << endl;
	return 0;
}

void calculator() {
	// User input defines what number01 and number02 are set as
	cout << "Enter first digit: \n";
	cin >> number01;
	cout << "Enter second digit: \n";
	cin >> number02;
	cout << "Please enter an operator (+, -, /, *, %): ";
	cin >> o;
}