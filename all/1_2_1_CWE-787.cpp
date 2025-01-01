#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    for (int i = 0; i < input.size(); i++) {
        input[i] = tolower(input[i]);
    }
    cout << input << endl;
    return 0;
}
