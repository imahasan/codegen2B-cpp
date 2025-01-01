#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cassert>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 0, b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    assert(a >= 0 && b >= 0);
    cout << "The sum of " << a << " and " << b << " is " << add(a, b) << endl;
    return 0;
}