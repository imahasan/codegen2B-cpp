#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
        string fileName;
        cout << "Please enter the file name: ";
        cin >> fileName;
        ifstream file(fileName);
        if (file.is_open())
        {
                cout << "File " << fileName << " is opened successfully." << endl;
                cout << "The file contains the following lines: " << endl;
                while (file.good())
                {
                        string line;
                        getline(file, line);
                        cout << line << endl;
                }
                file.close();
        }
        else
        {
                cout << "File " << fileName << " is not opened successfully." << endl;
        }
        system("pause");
        return 0;
}