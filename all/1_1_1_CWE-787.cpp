#include <iostream>
#include <string>

using namespace std;

string removeVowels(string str)
{
    string result = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "The string without vowels is: " << removeVowels(str) << endl;
    return 0;
}
