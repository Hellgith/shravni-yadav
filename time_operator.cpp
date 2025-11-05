#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
public:
    Time() : hours(0), minutes(0) {}
    friend istream& operator>>(istream& in, Time& t);
    friend ostream& operator<<(ostream& out, const Time& t);
};

istream& operator>>(istream& in, Time& t) {
    cout << "Enter hours: ";
    in >> t.hours;
    cout << "Enter minutes: ";
    in >> t.minutes;
    if (t.minutes >= 60) {
        t.hours += t.minutes / 60;
        t.minutes = t.minutes % 60;
    }
    return in;
}

ostream& operator<<(ostream& out, const Time& t) {
    out << setw(2) << setfill('0') << t.hours << ":"
        << setw(2) << setfill('0') << t.minutes;
    return out;
}

int main() {
    Time t1;
    cin >> t1;
    cout << "\nFormatted Time is: " << t1 << endl;
    return 0;
}
