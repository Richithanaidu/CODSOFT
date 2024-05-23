#include <iostream>
using namespace std;
double add(double x, double y) {
    return x + y;
}
double subtract(double x, double y) {
    return x - y;
}
double multiply(double x, double y) {
    return x * y;
}
double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    }
int main() {
    double num1, num2;
    int choice;
    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;
    if (choice >= 1 && choice <= 4) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            }
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}

