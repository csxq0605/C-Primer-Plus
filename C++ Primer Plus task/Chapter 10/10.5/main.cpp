#include <iostream>
#include "10.5.h"
using namespace std;

int main(){
    Stack stack;
    Item item;
    char ch;
    int sum = 0;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n'){
            continue;
        }
        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }
        switch(ch){
            case 'A':
            case 'a':
                cout << "Enter a customer to add: ";
                cin.getline(item.fullname, 35);
                cout << "Enter the payment: ";
                cin >> item.payment;
                if(stack.isfull()){
                    cout << "Stack is full\n";
                }
                else{
                    stack.push(item);
                }
                break;
            case 'P':
            case 'p':
                if(stack.isempty()){
                    cout << "Stack is empty\n";
                }
                else{
                    item = stack.pop();
                    sum += item.payment;
                    cout << "Customer " << item.fullname << " with payment " << item.payment << " popped\n";
                    cout << "Total payment: " << sum << endl;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}