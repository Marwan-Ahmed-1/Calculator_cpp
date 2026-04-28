#include <iostream>
using namespace std;

int main() {
	double num1, num2, result;
	int choice;
	char again;

	do {
		cout << "\n=== Calculator Menu ===\n";
		cout << "1. Addition (+)\n";
		cout << "2. Subtraction (-)\n";
		cout << "3. Multiplication (*)\n";
		cout << "4. Division (/)\n";
		cout << "5. Exit\n";
		cout << "Choose an option: ";
		cin >> choice;

		if (choice >= 1 && choice <= 4) {
			cout << "Enter first number: ";
			cin >> num1;

			cout << "Enter second number: ";
			cin >> num2;

			switch (choice) {
			case 1:
				result = num1 + num2;
				cout << "Result = " << result << endl;
				break;
			case 2:
				result = num1 - num2;
				cout << "Result = " << result << endl;
				break;
			case 3:
				result = num1 * num2;
				cout << "Result = " << result << endl;
				break;
			case 4:
				if (num2 != 0) {
					result = num1 / num2;
					cout << "Result = " << result << endl;
				}
				else {
					cout << "Error: Division by zero!\n";
				}
				break;
			}

	
			cout << "\nDo you want another calculation? (y/n): ";
			cin >> again;

		}
		else if (choice == 5) {
			cout << "Exiting...\n";
			break;
		}
		else {
			cout << "Invalid choice! \n";
			continue;
		}

	} while (again == 'y' || again == 'Y');

	return 0;
}

