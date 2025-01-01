#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <climits>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            v.push_back(string(1, s[i]));
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}