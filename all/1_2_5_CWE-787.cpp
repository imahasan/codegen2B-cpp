#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toLowerCase(const string& input) {
  string output;
  for (int i = 0; i < input.length(); i++) {
    output += tolower(input[i]);
  }
  return output;
}

int main()
{
    
    return 0;
}