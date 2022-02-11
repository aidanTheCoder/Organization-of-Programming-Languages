#include <iostream>
#include <string>
using namespace std;

void hello(string name);

int main(int argc, char* argv[]) {
    cout << "Hello C++!" << endl;
    for(int i = 0; i < argc; ++i)
        hello(string(argv[i]));
    return 0;
}

void hello(string name) {
    cout << "Hello " << name << endl;
}
