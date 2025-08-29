#include <iostream>
using namespace std;

class Stack {
private:
    int* stack;
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        stack = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] stack;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int element) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push element.\n";
        } else {
            stack[++top] = element;
            cout << "Pushed " << element << " to stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop element.\n";
        } else {
            cout << "Popped element: " << stack[top--] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No elements to peek.\n";
        } else {
            cout << "Top element: " << stack[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements from bottom to top: ";
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    int choice, element;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Check if stack is empty\n";
        cout << "4. Check if stack is full\n";
        cout << "5. Display stack\n";
        cout << "6. Peek (top element)\n";
        cout << "7. Exit\n";

        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                stack.push(element);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                if (stack.isEmpty())
                    cout << "Stack is empty.\n";
                else
                    cout << "Stack is not empty.\n";
                break;

            case 4:
                if (stack.isFull())
                    cout << "Stack is full.\n";
                else
                    cout << "Stack is not full.\n";
                break;

            case 5:
                stack.display();
                break;

            case 6:
                stack.peek();
                break;

            case 7:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 7.\n";
        }
    }
}
