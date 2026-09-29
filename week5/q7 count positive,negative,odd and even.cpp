#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive numbers = " << positive << endl;
    cout << "Negative numbers = " << negative << endl;
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}

