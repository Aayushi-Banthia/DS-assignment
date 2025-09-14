#include <iostream>
#include <string>
using namespace std;
#define MAX 100
int main() {
    char stackArr[MAX];
    int top = -1;
    string c;
    cout << "Enter an expression: ";
    cin >> c;
    bool bracket = true;
    for (int i = 0; i < c.length(); i++) {
        char ch = c[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            if (top == MAX - 1) {
                cout << "Stack is full" << endl;
            }
            else{
                top = top + 1;
                stackArr[top] = ch;
            }
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                bracket = false;
                break;
            }
            char topChar = stackArr[top];
            top = top - 1;
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                bracket = false;
                break;
            }
        }
    }
    if (top != -1) {
        bracket = false;
    }
    if (bracket)
        cout << "The expression is BALANCED." << endl;
    else
        cout << "The expression is NOT BALANCED." << endl;

    return 0;
}
