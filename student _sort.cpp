#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void show() {
        cout << name << " - " << marks << endl;
    }
};

bool sortByName(Student a, Student b) {
    return a.name < b.name;
}

bool sortByMarks(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    vector<Student> s = {
        {"Ravi", 85},
        {"Anita", 92},
        {"Kunal", 78},
        {"Deepa", 88}
    };

    cout << "Original List:\n";
    for (auto &x : s) x.show();

    sort(s.begin(), s.end(), sortByName);
    cout << "\nSorted by Name:\n";
    for (auto &x : s) x.show();

    sort(s.begin(), s.end(), sortByMarks);
    cout << "\nSorted by Marks:\n";
    for (auto &x : s) x.show();

    return 0;
}
