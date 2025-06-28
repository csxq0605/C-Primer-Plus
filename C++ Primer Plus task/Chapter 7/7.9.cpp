#include <iostream>
using namespace std;

const int SLEN = 30;

struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa [], int n){
    int count = 0;
    while (count < n and cin >> pa[count].fullname >> pa[count].hobby >> pa[count].ooplevel){
        ++count;
    }
    return count;
}

void display1(student st){
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps){
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa [], int n){
    for (int i = 0; i < n; i++){
        display1(pa[i]);
    }
}

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n'){
        continue;
    }
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}