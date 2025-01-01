#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <fstream>
#include <bitset>
#include <time.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int i = 0;
        while(i < len)
        {
            if(s[i] == ' ')
            {
                s[i] = '0';
            }
            i++;
        }
        cout << s << endl;
    }
    return 0;
}
