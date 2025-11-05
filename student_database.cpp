#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Academic {
public:
    int rollNo;
    float marks[3];

    void getMarks() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Student : public Person, public Academic {
public:
    void showResult() {
        float total = marks[0] + marks[1] + marks[2];
        float per = total / 3;
        cout << "\n--- Student Record ---\n";
        cout << "Name: " << name << "\nAge: " << age;
        cout << "\nRoll No: " << rollNo;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << per << "%" << endl;
    }
};

int main() {
    Student s;
    s.getDetails();
    s.getMarks();
    s.showResult();
    return 0;
}
