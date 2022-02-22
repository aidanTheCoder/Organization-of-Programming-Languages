#include <iostream>
#include <iomanip>
#include "IntegerBuffer.h"
using namespace std;

int main() {
    const int numberOfValues = 16;
    int values[numberOfValues] = {23, 12, -6, 14, 0, 37, -26, 5, 11,
        -4, 16, 12, 8, -3, 6, -2};
    IntegerBuffer ibuf;
    ibuf.add(values, numberOfValues);
    ibuf.add(values, numberOfValues);
    cout << "C++ Example\n";
    int column = 0;
    GoFiterator* iter = ibuf.createIterator();
    for (iter->first(); !iter->isDone(); iter->next()) {
        if (column >= 10) {
            cout << endl;;
            column = 1;
        } else
            ++column;
        cout << setw(5) << iter->currentItem();
    }
    cout << endl;
    return 0;
}
