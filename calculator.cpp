#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, result;
    char operation;
    cout << "Simple Calculator" << endl;
    cout << "Enter any arithmetic operation(e.g., 5 + 2): ";
    cin >> a >> operation >> b;
    switch(operation) {
        case '+':
            result = a + b;
            cout << "Result:" << result << endl;
            break;
        case '-':
            result = a - b;
            cout << "Result:" << result << endl;
            break;
        case '*':
            result = a * b;
            cout << "Result:" << result << endl;
            break;
        case '/':
            if (b!= 0) {
                result = a / b;
                cout << "Result:" << result << endl;
            } else {
                cout << "Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Please select one of the following operations: (+, -,*, /)" << endl;
    }
    return 0;
}