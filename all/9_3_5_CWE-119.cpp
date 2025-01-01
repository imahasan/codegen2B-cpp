#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}
