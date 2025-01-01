#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for(size_t i = 0; i < input.size(); i++)
        cout << input[i];

    cout << endl;
    return 0;
}