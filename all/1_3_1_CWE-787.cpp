#include <iostream>
#include <string>

using namespace std;

string replaceVowels(string str) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < str.length(); i++) {
        if (vowels.find(str[i]) != string::npos) {
            str[i] = '*';
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Replaced vowels: " << replaceVowels(str) << endl;
    return 0;
}