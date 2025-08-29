#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseStringUsingStack(const string& input) {
    stack<char> s;

    // Push all characters of the string onto the stack
    for (char ch : input) {
        s.push(ch);
    }

    // Pop characters from the stack and append to result
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseStringUsingStack(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
