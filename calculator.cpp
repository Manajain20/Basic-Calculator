#include <iostream>
#include <limits>
using namespace std;
 
// Fn to display menu
void showMenu() {
    cout << "       BASIC CALCULATOR       " << endl;
    cout << " 1. Addition       (+)" << endl;
    cout << " 2. Subtraction    (-)" << endl;
    cout << " 3. Multiplication (*)" << endl;
    cout << " 4. Division       (/)" << endl;
    cout << " 5. Modulus        (%)" << endl;
    cout << " 6. Exit" << endl;
    cout << " Enter your choice: ";
}
 
// Fn to get a valid number from user
double getNumber(string prompt) {
    double num;
    while (true) {
        cout << prompt;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Invalid input. Please enter a number." << endl;
        } else {
            return num;
        }
    }
}
 
// Fn to get a valid integer choice
int getChoice() {
    int choice;
    while (true) {
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 6) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Invalid choice. Enter 1-6: ";
        } else {
            return choice;
        }
    }
}
 
// sum
double add(double a, double b) { return a + b; }
 
// diff
double subtract(double a, double b) { return a - b; }
 
// product
double multiply(double a, double b) { return a * b; }
 
// quotient (invalid if divided by 0)
void divide(double a, double b) {
    if (b == 0) {
        cout << " Error: Division by zero is not allowed!" << endl;
    } else {
        cout << " Result: " << a << " / " << b << " = " << a / b << endl;
    }
}
 
// Modulus with zero check (integers only)
void calcModulus(double a, double b) {
    if (b == 0) {
        cout << " Error: Modulus by zero is not allowed!" << endl;
    } else {
        cout << " Result: " << (int)a << " % " << (int)b << " = " << (int)a % (int)b << endl;
    }
}
 
int main() {
 
    int choice;
    double num1, num2;
 
    do {
        showMenu();
        choice = getChoice();
 
        if (choice == 6) {
            cout << "\n Thank you for using the calculator. Goodbye!\n" << endl;
            break;
        }
 
        num1 = getNumber(" Enter first number  : ");
        num2 = getNumber(" Enter second number : ");
 
        switch (choice) {
            case 1:
                cout << " Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;
            case 2:
                cout << " Result: " << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << " Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                calcModulus(num1, num2);
                break;
        }
 
    } while (choice != 6);
 
    return 0;
}
