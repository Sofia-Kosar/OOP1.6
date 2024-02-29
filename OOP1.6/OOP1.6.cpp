
#include "Triad.h"
#include <iostream>

using namespace std;

int main() {
    Date::Triad t1 = Date::Triad(), t2 = Date::Triad(); // Ініціалізовано t1 та t2
    Date d1, d2;

    cout << "Enter values for the first triad:" << endl;
    t1.Read();
    cout << "Enter values for the second triad:" << endl;
    t2.Read();

    d1.Init(t1);
    d2.Init(t2);

    cout << "First date: ";
    d1.Display();
    cout << "Second date: ";
    d2.Display();

    // Compare dates using different criteria
    if (d1.Leq(d2)) {
        cout << "First date is less than or equal to the second date." << endl;
    }
    else {
        cout << "First date is greater than the second date." << endl;
    }
    if (d1.Le(d2)) {
        cout << "First date is less than  the second date." << endl;
    }
    else {
        cout << "First date is greater or equal than the second date." << endl;
    }

    if (d1.Eq(d2)) {
        cout << "First date is equal to the second date." << endl;
    }
    else {
        cout << "First date is not equal to the second date." << endl;
    }

    if (d1.Ne(d2)) {
        cout << "First date is not equal to the second date." << endl;
    }
    else {
        cout << "First date is equal to the second date." << endl;
    }

    if (d1.Gt(d2)) {
        cout << "First date is greater than the second date." << endl;
    }
    else {
        cout << "First date is less than or equal to the second date." << endl;
    }
    if (d1.Gtq(d2)) {
        cout << "First date is greater or equal than the second date." << endl;
    }
    else {
        cout << "First date is less than  the second date." << endl;
    }

    return 0;
}