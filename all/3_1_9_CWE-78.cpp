#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
        string fileName;
        cout << "Enter the file name: ";
        cin >> fileName;
        system(("ls " + fileName).c_str());
        return 0;
}