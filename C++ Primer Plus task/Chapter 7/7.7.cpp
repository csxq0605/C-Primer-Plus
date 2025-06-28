#include <iostream>
using namespace std;

double * Fill_array(double * begin, double * end){
    double temp;
    double * p;
    for (p = begin; p != end; p++){
        cin >> temp;
        if (!cin){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            }
            cout << "Bad input. Input process terminated.\n";
            break;
        }
        else if (temp < 0){
            break;
        }
        else{
            *p = temp;
        }
    }
    return p;
}

void Show_array(double * begin, double * end){
    for (auto p = begin; p != end; p++){
        cout << *p << " ";
    }
    cout << endl;
}

void Reverse_array(double * begin, double * end){
    for (; begin < end; begin++, end--){
        double temp = *begin;
        *begin = *end;
        *end = temp;
    }
}

int main(){
    const int size = 10;
    double arr[size];
    double * begin = &arr[0];
    double * end = Fill_array(begin, begin + size);
    Show_array(begin, end);
    Reverse_array(begin, end - 1);
    Show_array(begin, end);
    Reverse_array(begin + 1, end - 2);
    Show_array(begin, end);
    return 0;
}