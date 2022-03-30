#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "TBuffer.hpp"
using namespace std;

class TablePrint
{
    int column;
public:
    TablePrint() : column(0) { }
    ~TablePrint() 
    {
        cout << endl;
    }
    void operator()(int x) 
    {
        if (++column > 10) {
            cout << endl;
            column = 1;
        }
        cout << setw(5) << x;
    }
};

int main() 
{
    static const int BUFSZ = 25;
    TBuffer<int, BUFSZ> ibuf;
    for (int i = 0; i < BUFSZ; ++i)
        ibuf.add(rand() % 100);
    ibuf.map(TablePrint());
    //use a lambda function to print the buffer in a row
    ibuf.map([] (int value) { cout << value << " "; });
    //use a lambda function to sort a buffer smallest to largest
    ibuf.sort([] (int value1, int value2) { return value1 > value2; });
    //use a lambda closure to compute the average
    double sum = 0;
    ibuf.map([&] (int value) { sum += value; });
    cout << "\nThe average is " << sum / BUFSZ << endl;
    //use a lambda closure to print the table
    int column = 0;
    ibuf.map([&] (int value)
    {
        if (++column > 10) {
            cout << endl;
            column = 1;
        }
        cout << setw(5) << value;
    });
    cout << endl;
    return 0;
}
