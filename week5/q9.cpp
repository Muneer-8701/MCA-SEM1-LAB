#include <iostream>
using namespace std;

int main() {
    int n, num, frequency = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number to find frequency: ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            frequency++;
        }
    }

    cout << "Frequency of " << num << " = " << frequency << endl;

    return 0;
}

