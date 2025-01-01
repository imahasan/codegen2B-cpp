#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 1;
    cout << "p is " << p << endl;
    if (p) {
        cout << "p is not NULL" << endl;
    } else {
        cout << "p is NULL" << endl;
    }
    delete p;
    return 0;
}
