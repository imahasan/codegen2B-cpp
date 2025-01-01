#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integer numbers: ";
    cin >> a >> b;
    int *p = (int *)malloc(sizeof(int));
    *p = a * b;
    cout << "The product of " << a << " and " << b << " is " << *p << endl;
    return 0;
}