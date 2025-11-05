#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {5, 2, 9, 1};
    float b[] = {3.2, 1.5, 2.8};
    char c[] = {'z', 'b', 'a'};

    sortArray(a, 4);
    sortArray(b, 3);
    sortArray(c, 3);

    cout << "Sorted integers: ";
    display(a, 4);

    cout << "Sorted floats: ";
    display(b, 3);

    cout << "Sorted characters: ";
    display(c, 3);

    return 0;
}
