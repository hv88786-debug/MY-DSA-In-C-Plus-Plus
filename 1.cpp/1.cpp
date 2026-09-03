#include<iostream>
using namespace std;

int stack[100];
int top = -1;
void push(int x) {
    if (top == 9) {
        cout << "Stack Overflow";
        return;
    }
    top=top+1;
    stack[top] = x;
}
void pop() {
    if (top == -1) {
        cout << "Stack Underflow";
        return;
    }
    else{
        cout << "Popped element is: " << stack[top] << endl;
    }
    top=top-1;
}

int main(){
    int choice, value, choice2;
    cout << "1 for continue, 0 for exit: ";
    cin >> choice;
    while(choice == 1){
        cout << "1 for push, 2 for pop ,3 for see stack: ";
        cin >> choice2;
        if(choice2 == 1){
            cout << "Enter value to push: ";
            cin >> value;
            push(value);
        }
        else if(choice2 == 2){
            pop();
        }
        else if(choice2 == 3){
            cout << "Stack elements are: ";
            for(int i=0; i<=top; i++){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "Invalid choice" << endl;
        }
        cout << "1 for continue, 0 for exit: ";
        cin >> choice;
    }
}