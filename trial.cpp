#include <iostream>
#include <string.h>

using namespace std;

class student {
private:
    int roll;
    char name[30];
    char add[30];

public:
    student(char* n, int r, char* a);
    void display();
};

student::student(char* n, int r, char* a) {
    strcpy(name, n);
    strcpy(add, a);
    roll = r;
}

void student::display() {
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Address: " << add << endl;
}

int main() {
    int n;
    cout << "Enter Total Number of Students: ";
    cin >> n;

    student** students = new student*[n];

    for (int i = 0; i < n; i++) {
        char na[30];
        int ro;
        char ad[30];

        cout << "Enter Name, Roll, and Address of Student " << i + 1 << endl;
        cin >> na >> ro >> ad;

        students[i] = new student(na, ro, ad);
    }

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i]->display();
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete students[i];
    }

    delete[] students;

    return 0;
}

