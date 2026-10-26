#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // -1 means the stack is initially empty
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << "\n";
            return;
        }
        top++;
        arr[top] = value;
        cout << "Pushed: " << value << "\n";
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty.\n";
            return -1;
        }
        int popped_value = arr[top];
        top--;
        return popped_value;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.display();

    cout << "Top element (peek): " << myStack.peek() << "\n";
    cout << "Popped element: " << myStack.pop() << "\n";
    myStack.display();

    return 0;
}