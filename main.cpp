// voltage017 (2025) (c) All Rights Reserved
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	 int result = 1 + rand() %  20;
	 cout << "Welcome!  Random value: " <<  result << endl;
	// Calc
	float num1, num2;
	cout << "Enter number 1: ";
	cin >> num1;

	cout << "Enter number 2: ";
	cin >> num2;

	char math;
	cout << "Enter math symbol: " << std::endl; // +, -, *, /
		std::cin >> math;

		if (math == '+')
			cout << "Result: " << num1 + num2 << std::endl;
		else if (math == '-')
			cout << "Result: " << num1 - num2 << std::endl;
		if (math == '*')
			cout << "Result: " << num1 * num2 << std::endl;
	
		if (math == '/') {
			if (num2 == 0.0f)
				cout << "Error" << std::endl;
			else
				cout << "Result " << num1 / num2 << std::endl;}
			return 0;
}
