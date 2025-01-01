#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <sstream>
#include <cassert>
#include <bitset>

using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.size();
    int i = 0;
    while (i < len) {
        if (str[i] == ' ') {
            str[i] = '0';
        }
        i++;
    }
    cout << str << endl;
    return 0;
}
