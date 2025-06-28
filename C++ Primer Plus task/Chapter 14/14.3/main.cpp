#include "workermi.h"
#include <iostream>
#include <cstring>
#include "QueueTp.h"
using namespace std;
const int SIZE = 5;

int main(){
    Queue<Worker *> q(SIZE);
    Worker * temp;
    int ct;
    for (ct = 0; ct < SIZE; ct++){
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter s: singer\n"
             << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL){
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice){
            case 'w': temp = new Waiter;
                      break;
            case 's': temp =new Singer;
                      break;
            case 't': temp = new SingingWaiter;
                      break;
        }
        cin.get();
        temp -> Set();
        q.enqueue(temp);
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++){
        cout << endl;
        q.dequeue(temp);
        temp -> Show();
        delete temp;
    }
    cout << "Enter q to quit: ";
    while (cin.get() != 'q')
        continue;
    cout << "Bye.\n";
    return 0;
}