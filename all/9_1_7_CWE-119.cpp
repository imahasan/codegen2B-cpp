#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str;
    int arr[10];
    int i;
    cout << "Enter string: ";
    cin >> str;
    for (i = 0; i < str.size(); i++)
    {
        arr[i] = str[i];
    }
    for (i = 0; i < str.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
